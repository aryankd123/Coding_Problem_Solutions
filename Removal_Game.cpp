#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
    int n;
    cin>>n;
    vector<int>v(n+1);
    int sum=0;

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v[i]=x;
        sum+=x;


    }

    vector<vector<int>>dp(n+2,vector<int>(n+2,0));
    for(int i=1;i<=n;i++){
        dp[i][i]=v[i];

    }
    for(int l=n;l>=1;l--){
        for(int r=1;r<=n;r++){
            if(l!=r)dp[l][r]=max(v[l]-dp[l+1][r],v[r]-dp[l][r-1]);
        }
        
    }

    int ans=(sum+  dp[1][n] )/2;
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