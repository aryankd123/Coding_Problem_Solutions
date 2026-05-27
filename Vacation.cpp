#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    vector<int>c;

    for(int i=0;i<n;i++){
        int a1,b1,c1;
        cin>>a1>>b1>>c1;
        a.push_back(a1);
        b.push_back(b1);
        c.push_back(c1);


    }
    vector<vector<int>>dp(n,vector<int>(3,0));
    dp[n-1][0]=a[n-1];
    dp[n-1][1]=b[n-1];
    dp[n-1][2]=c[n-1];
    
    for(int i=n-2;i>=0;i--){
        dp[i][0]=a[i]+max(dp[i+1][1],dp[i+1][2]);
        dp[i][1]=b[i]+max(dp[i+1][0],dp[i+1][2]);
        dp[i][2]=c[i]+max(dp[i+1][0],dp[i+1][1]);
    }
    int ans=max(max(dp[0][0],dp[0][1]),dp[0][2]);
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