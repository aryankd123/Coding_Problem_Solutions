#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<long long >v;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    vector<long long>dp(n,0);
    dp[n-1]=0LL;
    dp[n-2]=dp[n-1]+abs(v[n-1]-v[n-2]);
    for(int i=n-3;i>=0;i--){
        dp[i]=min(dp[i+1]+abs(v[i]-v[i+1]),dp[i+2]+abs(v[i]-v[i+2]));

    }
    cout<<dp[0];

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t =1;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}