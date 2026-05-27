#include<bits/stdc++.h>
using namespace std;

struct State{
    int r;
    int c;
    int dir; 
};

int dr[]={-1,0,1,0};
int dc[]={0,1,0,-1};
char dir_chars[]={'U','R','D','L'};

void solve(){
    int H,W;
    if(!(cin>>H>>W)) return;

    vector<string> grid(H);
    int sr=-1,sc=-1;
    int gr=-1,gc=-1;

    for(int i=0;i<H;++i){
        cin>>grid[i];
        for(int j=0;j<W;++j){
            if(grid[i][j]=='S'){
                sr=i;sc=j;
            }else if(grid[i][j]=='G'){
                gr=i;gc=j;
            }
        }
    }

    vector<vector<vector<bool>>> visited(H,vector<vector<bool>>(W,vector<bool>(4,false)));
    vector<vector<vector<int>>> parent_dir(H,vector<vector<int>>(W,vector<int>(4,-1)));
    queue<State> q;

    for(int nd=0;nd<4;++nd){
        int nr=sr+dr[nd];
        int nc=sc+dc[nd];
        if(nr>=0&&nr<H&&nc>=0&&nc<W&&grid[nr][nc]!='#'){
            visited[nr][nc][nd]=true;
            parent_dir[nr][nc][nd]=-1; 
            q.push({nr,nc,nd});
        }
    }

    int final_r=-1,final_c=-1,final_d=-1;

    while(!q.empty()){
        State curr=q.front();
        q.pop();

        int r=curr.r;
        int c=curr.c;
        int d=curr.dir;

        if(r==gr&&c==gc){
            final_r=r;
            final_c=c;
            final_d=d;
            break;
        }

        for(int nd=0;nd<4;++nd){
            if(grid[r][c]=='o'&&nd!=d) continue;
            if(grid[r][c]=='x'&&nd==d) continue; 

            int nr=r+dr[nd];
            int nc=c+dc[nd];
            if(nr>=0&&nr<H&&nc>=0&&nc<W&&grid[nr][nc]!='#'){
                if(!visited[nr][nc][nd]){
                    visited[nr][nc][nd]=true;
                    parent_dir[nr][nc][nd]=d; 
                    q.push({nr,nc,nd});
                }
            }
        }
    }

    if(final_d==-1){
        cout<<"No\n";
    }else{
        cout<<"Yes\n";
        string path="";
        int curr_r=final_r;
        int curr_c=final_c;
        int curr_d=final_d;
        
        while(curr_d!=-1){
            path+=dir_chars[curr_d];
            int prev_r=curr_r-dr[curr_d];
            int prev_c=curr_c-dc[curr_d];
            curr_d=parent_dir[curr_r][curr_c][curr_d];
            curr_r=prev_r;
            curr_c=prev_c;
        }
        
        reverse(path.begin(),path.end());
        cout<<path<<"\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}