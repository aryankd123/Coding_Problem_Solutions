#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<vector<int>>dp(8,vector<int>(8,5000));
    dp[7][0]=0;
     vector<vector<int>>v(8,vector<int>(8,0));
     for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            int x;
            cin>>x;
            v[i][j]=x;


        }
     }
     
     for(int i=7;i>=0;i--){
        for(int j=0;j<8;j++){
            if(i+1<8)dp[i][j]=dp[i+1][j];
            if(j-1>=0)dp[i][j]=min(dp[i][j],dp[i][j-1]);
            if(i+1<8 && j-1>=0)dp[i][j]=min(dp[i][j],dp[i+1][j-1]);
            
            dp[i][j]+=v[i][j];
        }
     }
     cout<<dp[0][7];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("king2.in","r",stdin);
    freopen("king2.out","w",stdout);
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}