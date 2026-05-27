#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
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
        long long flag=INT_MAX;
        for(int j=1;i+j<=min(n-1,i+k);j++)flag=min(flag,dp[i+j]+abs(v[i]-v[i+j]));

        dp[i]=flag;
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