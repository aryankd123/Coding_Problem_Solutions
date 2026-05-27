#include <bits/stdc++.h>
using namespace std;

void solve() {
    int s,n;
    cin>>s>>n;
    vector<int>v(n+1,0);

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v[i]=x;
    }
    // vector<vector<int>>dp(n+1,vector<int>(s+1,0));
    vector<int> curr(s+1,0);
    vector<int>prev(s+1,0);
    // dp[0][0]=1;
    prev[0]=1;
    // if(v[0]<=s)dp[0][v[0]]=1;
    for(int i=1;i<=n;i++ ){
     for(int j=0;j<=s;j++){
        curr[j]=(prev[j]);
        if(j-v[i]>=0)curr[j]=max(curr[j],prev[j-v[i]]);
     }
     prev=curr;
        }
    
    int ans=0;
    for(int j=0;j<=s;j++){
        if(prev[j]>0)ans=j;
    }
    cout<<ans;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("knapsack.in","r",stdin);
    // freopen("knapsack.out","w",stdout);
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}