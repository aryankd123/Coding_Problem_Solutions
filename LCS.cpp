#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1;
    string s2;
cin>>s1>>s2;

   int n=s1.size();
   int m=s2.size();
   vector<vector<int>>dp(n+1,vector<int>(m+1,0));
//    if(s1[n-1]==s2[m-1])dp[n-1][m-1]=1;

   for(int i=n-1;i>=0;i--){
    for(int j=m-1;j>=0;j--){
        if(s1[i]==s2[j] && i+1<=n && j+1<=m)dp[i][j]=dp[i+1][j+1]+1;
        if(i+1<=n)dp[i][j]=max(dp[i][j],dp[i+1][j]);
        if(j+1<=m)dp[i][j]=max(dp[i][j],dp[i][j+1]);
    }
   }
   string ans="";
   int i=0;int j=0;

while ( i < n &&  j < m) {
        if (s1[i] == s2[j]) {
        
            ans.push_back(s1[i]);
            i++;
            j++;
        } else if (dp[i + 1][j] >= dp[i][j + 1]) {
         
            i++;
        } else {
            
            j++;
        }
    }
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