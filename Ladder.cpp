#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    dp[n]=v[n-1];
    if(n-2>=0)dp[n-1]=dp[n]+v[n-2];
    else dp[n-1]=dp[n];
    for(int i=n-2;i>=0;i--){
        if(i==0)dp[i]=max(dp[i+1],dp[i+2]);
       else  dp[i]=max(dp[i+1],dp[i+2])+v[i-1];
    }
cout<<dp[0];

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("ladder.in", "r", stdin);
    
    // Write to "output.out"
    freopen("ladder.out", "w", stdout);
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}