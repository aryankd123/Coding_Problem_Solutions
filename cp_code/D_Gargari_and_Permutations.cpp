#include <bits/stdc++.h>
using namespace std;


int dfs(int node ,vector<vector<int>>&adj,vector<int>& dp){
    
if(dp[node]!=-1)return dp[node];
int best =0;
    for(auto neigh:adj[node]){
        best=max(dfs(neigh,adj,dp),best);
    }

    return dp[node]=best+1;

}

void solve() {
    int n,k;
    cin>>n>>k;

    vector<vector<int>>v(k+1,vector<int>(n+1));

    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            int x;
            cin>>x;
            v[i][x]=j;

    }

}

vector<vector<int>>adj(n+1);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==i)continue;
        bool flag =1;

        for(int jk=1;jk<=k;jk++){
            if(v[jk][j]>v[jk][i]){flag=0;break;}
        }
    if(flag==1 && i!=j)adj[i].push_back(j);

    }
}

int ans=0;
vector<int>dp(n+1,-1);

for(int i=1;i<=n;i++){
    ans=max(ans,dfs(i,adj,dp));
}


cout<<ans;





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