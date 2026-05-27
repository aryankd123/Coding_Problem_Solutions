#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int M =1e9+7;

void solve() {
   int n,m;
   cin>>n>>m;
   vector<vector<int>>dp(n+1,vector<int>(m+2,0));

   vector<int>v(n+1,0);
   for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    v[i]=x;
   }

   for(int i=1;i<=n;i++){
    if( i==1){
        if(v[i]==0){
        for(int j=1;j<=m;j++){
            dp[i][j]=1;
        }
        }
        else {
            dp[i][v[i]]=1;
        }

    }
    else if(v[i]==0){
        for(int j=1;j<=m;j++){
            dp[i][j]=1*(dp[i-1][j-1]%M+(dp[i-1][j]%M+dp[i-1][j+1]%M)%M)%M;
            
        }
    }
    else {
        dp[i][v[i]]=1*(dp[i-1][v[i]-1]%M+(dp[i-1][v[i]]%M+dp[i-1][v[i]+1]%M)%M)%M;
    }
}

int ans=0;
for(int j=1;j<=m;j++){
    ans=(ans%M+dp[n][j]%M)%M;
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