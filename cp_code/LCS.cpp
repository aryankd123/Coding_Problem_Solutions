#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1;
    string s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m=s2.size();
    int ans=0;
    // vector<int>prev(m+1,0);
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=n-1;i>=0;i--){
    // vector<int>curr(m+1,0);
        for(int j=m-1;j>=0;j--){
            if(s1[i]==s2[j]){
                if(i+1<n && j+1<m )dp[i][j]=dp[i+1][j+1];
                dp[i][j]++;
            }
            else {
                if(i+1<n)dp[i][j]=max(dp[i+1][j],dp[i][j]);
                if(j+1<m)dp[i][j]=max(dp[i][j+1],dp[i][j]);

            }
            ans=max(ans,dp[i][j]);

        }
        // prev=curr;
    }

 string flag ="";
 int i=0;
 int j=0;
 while(i<n && j<m){
    if(s1[i]==s2[j]){flag.push_back(s1[i]);i++;j++;}
    else if(dp[i+1][j]>=dp[i][j+1])i++;
    else j++;
 }
    cout<<flag;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  
        solve();
    
    
    return 0;
}