#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>v1(n+1,0);
    vector<int>v2(m+1,0);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v1[i]=x;

    }
    for(int j=1;j<=m;j++){
        int x;
        cin>>x;
        v2[j]=x;

    }

vector<vector<int>>dp(n+2,vector<int>(m+2,0));
for(int i=n;i>=1;i--){
    for(int j=m;j>=1;j--){
        if(v1[i]==v2[j])dp[i][j]=dp[i+1][j+1]+1;
        else {dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
         dp[i][j]=max(dp[i+1][j+1],dp[i][j]);
            
        }
        //if(v1[i]==v2[j])dp[i][j]++;

    }
}
cout<<dp[1][1]<<"\n";

int i=1;
int j=1;

vector<int> ans;
while(i<=n && j<=m){
    if(v1[i]==v2[j]){
        ans.push_back(v1[i]);
        i++;
        j++;
    }
    else {
        if(dp[i+1][j]>=dp[i][j+1])i++;
        else j++;


    }
}
// reverse(ans.begin(),ans.end());
for(auto val:ans)cout<<val<<" ";



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