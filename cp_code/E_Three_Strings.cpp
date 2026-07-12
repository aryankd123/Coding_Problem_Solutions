#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a,b,c;
    cin>>a>>b>>c;
    int n=a.size();
    int m=b.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,INT_MAX));
    dp[0][0]=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
      if(i<n){
        int cost =INT_MAX;
        if(a[i]==c[i+j])cost=0;
        else cost =1;
        dp[i+1][j]=min(dp[i+1][j],dp[i][j]+cost);

      }
      if(j<m){
        int cost=INT_MAX;
        if(b[j]==c[i+j])cost =0;
        else cost =1;
        dp[i][j+1]=min(dp[i][j+1],dp[i][j]+cost);

      }
    }
}

cout<<dp[n][m]<<"\n";




}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}