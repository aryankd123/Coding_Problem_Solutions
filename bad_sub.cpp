#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>>dp(n,vector<int>(3,1));
    if(n==0){cout<<1;return ;}
    for(int i=n-2;i>=0;i--){
        dp[i][0]=dp[i][0]*(dp[i+1][0]+dp[i+1][1]+dp[i+1][2]);
        dp[i][1]=dp[i][1]*(dp[i+1][1]+dp[i+1][2]);
        dp[i][2]=dp[i][2]*(dp[i+1][0]+dp[i+1][1]+dp[i+1][2]);
    }
    cout<<dp[0][0]+dp[0][1]+dp[0][2];
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