#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int n;
    cin>>n;
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for(int i=0;i<n;i++)dp[i][0]=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                dp[i][j]=dp[i-1][j];
                if(j-i>=0)dp[i][j]+=dp[i/2][j-i];
        }
        
    }
    cout<<dp[n][n];
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("peacefulsets.in","r",stdin);
    freopen("peacefulsets.out","w",stdout);
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}