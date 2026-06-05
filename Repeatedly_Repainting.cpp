#include <bits/stdc++.h>
using namespace std;

void solve() {

    
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(m));
    vector<vector<vector<char>>>history;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;

            v[i][j]=x;

        }
    }
    // history.push_back(v);

    // st.insert(v);
    int ct=0;

    while(1){
    vector<vector<char>>cpy(n,vector<char>(m,'.'));

    vector<vector<bool>>black(n,vector<bool>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='#')black[i][j]=1;

            
        }
    }
    int del_r[]={-1,-1,-1,0,1,1,1,0};
    int del_c[]={-1,0,1,1,1,0,-1,-1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(black[i][j]){
                for(int k=0;k<8;k++){
                    int n_row=i+del_r[k];
                    int n_col=j+del_c[k];
                    if(n_row>=0 && n_row<n && n_col>=0 && n_col<m && v[n_row][n_col]=='.' )cpy[n_row][n_col]='#';

                }
                cpy[i][j]='.';
            }

        }
    }
    ct++;
    if(history.size()>0 && cpy==history.back() ){
        history.push_back(v);
        history.push_back(cpy);
        break;
    }
    else if (history.size() >= 2 && cpy == history[history.size() - 2]) {
        
            history.push_back(v);
            history.push_back(cpy);
            break;
        }
    else {history.push_back(v);
    v=cpy;}



}
if(ct%2==0){
    vector<vector<char>>ans=history.back();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j];
        }
        cout<<"\n";
    }

}
else {
    history.pop_back();
    vector<vector<char>>ans=history.back();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j];
        }
        cout<<"\n";
    }
}

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}