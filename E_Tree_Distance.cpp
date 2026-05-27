#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
void  dfs(int source,vector<vector<pi>>& adj,vector<int> & distt){
// distt[source]=dis;

for(auto neigh:adj[source]){
int next=neigh.first;
int diss=neigh.second;
if(distt[next]==-1){
    distt[next]=distt[source]+diss;
    dfs(next,adj,distt);
}
}
}
class dsu {
    vector<int> parent,size;
    public:
    dsu(int n){
        parent.resize(n);
        size.resize(n,1);
        for(int i=0;i<n;i++){
            parent[i]=i;

        }

    }

    int find_parent(int node){
        if(parent[node]==node)return node;
        return parent[node]=find_parent(parent[node]);
    }
    void union_by_s(int u,int v ){
        int root_u=find_parent(u);
        int root_v=find_parent(v);
        if(root_u==root_v)return ;
        if(size[root_u]<size[root_v]){
            size[root_v]+=size[root_u];
            parent[root_u]=root_v;
        }
        else {
            size[root_u]+=size[root_v];
            parent[root_v]=root_u;
        }
    }

    

};

void solve() {
    int n;
    cin>>n;
    vector<pair<int,pi>>v;
    vector<vector<int>>dist(n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x;
            cin>>x;
            v.push_back({x,{i,j}});
            dist[i].push_back(x);
        }
    }
    sort(v.begin(),v.end());
    dsu ds(n);
    vector<vector<pi>>adj(n);
    for(int i=0;i<v.size();i++){
        int dis=v[i].first;
        int p1=v[i].second.first;
        int p2=v[i].second.second;
        if(ds.find_parent(p1)!=ds.find_parent(p2)){adj[p1].push_back({p2,dis});adj[p2].push_back({p1,dis});
    ds.union_by_s(p1,p2);}
        
    
    }
    for(int i=0;i<n;i++){
    vector<int>flag(n,-1);
    flag[i]=0;
    dfs(i,adj,flag);
    for(int j=i+1;j<n;j++){
        if(dist[i][j-(i+1)]!=flag[j]){cout<<"No\n";return ;}
    }
    }
    cout<<"Yes\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    solve();
    
    
    return 0;
}