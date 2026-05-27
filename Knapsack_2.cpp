#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
#define int long long 
void solve() {
    int n,W;
    cin>>n>>W;
    vector<vector<int>>dp(n,vector<int>(1e5+1,1e14));
    vector<int>weight;
    vector<int>value;


    for(int i=0;i<n;i++){
        int w,v;
        cin>>w>>v;
        weight.push_back(w);
        value.push_back(v);
    }
    
    dp[0][value[0]]=weight[0];
    dp[0][0]=0;
    for(int i=1;i<n;i++){
         dp[i][0]=0;
        for(int j=0;j<=1e5;j++){
        dp[i][j]=min(dp[i-1][j],dp[i][j]);
        if(j-value[i]>=0)dp[i][j]=min(dp[i][j],dp[i-1][j-value[i]]+weight[i]);
        }
    }
    int ans=0;
    for(int j=0;j<=1e5;j++){
        if(dp[n-1][j]<=W)ans=j;
    }
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