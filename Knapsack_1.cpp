#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,W;
    cin>>n>>W;
    vector<long long>weight;
    vector<long long>value;

    for(int i=0;i<n;i++){
        int w,v;
        cin>>w>>v;
        weight.push_back(w);
        value.push_back(v);


    }
    vector<vector<long long >>dp(n,vector<long long>(W+1,0));
    for(int j=0;j<=W;j++){
        if(j-weight[0]>=0)dp[0][j]=value[0];

    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=W;j++){
           if(j-weight[i]>=0) dp[i][j]=(dp[i-1][j-weight[i]]+value[i]);
           dp[i][j]=max(dp[i][j],dp[i-1][j]);
        }
    }
    cout<<dp[n-1][W];

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