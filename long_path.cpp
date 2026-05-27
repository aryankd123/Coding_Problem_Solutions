#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    vector<int>indegree(n+1,0);

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indegree[y]++;

    }
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0)q.push(i);

    }
    vector<int>v;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        v.push_back( node);
        for(auto neigh:adj[node]){
            indegree[neigh]--;
            if(indegree[neigh]==0)q.push(neigh);
        }
    }
    vector<int>dp(n+1,0);
    int ans=0;
   for(auto node:v){
    for(auto neigh:adj[node]){
        dp[neigh]=dp[node]+1;
        ans=max(ans,dp[neigh]);

    }
   }
    cout<<ans;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    freopen("longpath.in","r",stdin);
    freopen("longpath.out","w",stdout);
        solve();
    // }
    
    return 0;
}