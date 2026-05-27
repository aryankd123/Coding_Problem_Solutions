#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n,-1e9));
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            int x;
            cin>>x;
            v[i][j]=x;
        }
    }
    // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    //dp[0][0]=v[0][0];
    vector<int>curr(n+1,-1e9);
    vector<int>prev(n+1,-1e9);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
        if(i-1>=0 )curr[j]=prev[j];
        if(j-1>=0)curr[j]=max(curr[j],prev[j-1]);
        curr[j]+=v[i][j];

        }
        prev=curr;
    }
    int ans=INT_MIN;
    for(int j=0;j<n;j++){
        ans=max(ans,prev[j]);
    }
cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("slalom.in","r",stdin);
    //freopen("slalom.out","w",stdout);
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}