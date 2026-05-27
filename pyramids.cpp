#include <bits/stdc++.h>
using namespace std;
vector<int>v(300010,0);
void fill(){
    int flag=0;
    for(int i=1;i<300010;i++){
        flag+=i;
        v[i]=v[i-1]+flag;
        
    }
}
void solve() {
    int m;
    cin>>m;
    vector<int>v1(m+1,1);
    vector<vector<int>>dp(m+1,vector<int>(m+1,1e7));
    dp[0][0]=0;
    v1[0]=0;
    for(int i=1;i<=m;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=min(dp[i-1][j],dp[i][j]);
            dp[i][j]=min( dp[i][j-v[i]]+v1[i],dp[i][j]);
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<=m;i++){
        ans=min(ans,dp[i][m]);
    }
    cout<<ans<<"\n";
    
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