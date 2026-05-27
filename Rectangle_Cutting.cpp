#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int flag=INT_MAX;
            
            if(i==j )continue;
            for(int k=1;k<i;k++){
               if(i-k>=1) flag=min(flag,(dp[i-k][j]+dp[k][j])+1);
            }
            for(int k=1;k<j;k++){
            if(j-k>=1)flag =min(flag,(dp[i][j-k]+dp[i][k])+1);
            }
            dp[i][j]=flag;
        }
        
    }
    cout<<dp[n][m];
    
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