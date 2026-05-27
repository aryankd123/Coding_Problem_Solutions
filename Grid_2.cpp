#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
void solve() {
   int n,m,k;
   cin>>n>>m>>k;
   vector<vector<char>>grid(n,vector<char>(m,'.'));
   for(int i=0;i<k;i++){
   int x,y;
   cin>>x>>y;
   grid[x-1][y-1]='#';
   } 

   vector<vector<int>>dp(n,vector<int>(m,0));
   dp[0][0]=1;

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]!='#'){
            if(i-1>=0)dp[i][j]=(dp[i][j]%M+dp[i-1][j]%M)% M;
            if(j-1>=0)dp[i][j]=(dp[i][j]%M+dp[i][j-1]%M)%M ;
        }
    }
   }
   cout<<dp[n-1][m-1];


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