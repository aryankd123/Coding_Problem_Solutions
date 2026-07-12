#include <bits/stdc++.h>
using namespace std;


class dsu{
   public:
    vector<int>parent;
    vector<int>size;
    dsu(int n){
        size.resize(n+1,1);
        parent.resize(n+1,-1);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int find_parent(int u){
        if(u == parent[u])return u;
        return parent[u]=find_parent(parent[u]);
        
    }

    void join(int u, int v){
        int p_u=find_parent(u);
        int p_v=find_parent(v);
        if(p_u == p_v)return ;

        if(size[p_u]>=size[p_v]){
            size[p_u]+=size[p_v];
            parent[p_v]=p_u;

        }
        else {
            size[p_v]+=size[p_u];
            parent[p_u]=p_v;

        }

    }

    bool is_same(int u, int v){
        return find_parent(u)== find_parent(v);
    }

};


void solve() {
    int n,q;
    cin>>n>>q;
    dsu ds(n);
    while(q--){
        int t, u,v;
        cin>>t>>u>>v;
        if(t==0)ds.join(u,v);
        else cout<<ds.is_same(u,v)<<"\n";
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