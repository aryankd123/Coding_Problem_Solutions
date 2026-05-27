#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  int n,m;
  cin>>n>>m;
  vector<ll>indegree(n+1,0);
  vector<vector<ll>>adj(n+1);
    for(int  j=0;j<m;j++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        indegree[y]++;

    }
    queue<ll>q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0)q.push(i);
    }
    vector<int> ans;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto neigh:adj[node]){
            indegree[neigh]--;
            if(indegree[neigh]==0)q.push(neigh);

        }

    }
    ll final=0;
    vector<ll>dp(n+1,0);
    for(auto val:ans){
        for(auto neigh:adj[val]){
            dp[neigh]=max(dp[neigh],dp[val]+1);
            
        }
    }
    for(auto val:dp){
        final=max(final,val);
    }
    cout<<final;

    

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