#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;

#define int long long 

void dfs(int node,int parent ,vector<vector<int>>& adj,vector<vector<int>>& dp){
    dp[node][0]=1;
    dp[node][1]=1;
    
    for(auto neigh :adj[node]){
        if(neigh!=parent){
dfs(neigh,node,adj,dp);

        dp[node][0]=(dp[node][0]* (dp[neigh][1]+dp[neigh][0])%M)%M;
        dp[node][1]=(dp[node][1]* dp[neigh][0] )%M;
        }
        
    }


}
void solve() {
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    // vector<int>visited(n+1,0);
    vector<vector<int>> dp(n+1,vector<int>(2,0));
    // dfs(1,adj,dp,visited,0);
    dfs(1,0,adj,dp);
    int ans=(dp[1][0]%M+dp[1][1]%M)%M;
    // vector<
    // dfs()
    cout<<ans;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}