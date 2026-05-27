#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    vector<char> v;

    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
        if(v[i]=='w')dp[i]=-5000;
    }

    for(int i=n-2;i>=0;i--){
       if(v[i]!='w'){ dp[i]=dp[i+1];
        if(i+3<n)dp[i]=max(dp[i],dp[i+3]);
        if(i+5<n)dp[i]=max(dp[i],dp[i+5]);
       
    if(v[i]=='"')dp[i]++;}

    }
    if(dp[0]<0){cout<<-1;return ;}
    cout<<dp[0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("lepus.in","r",stdin);
    freopen("lepus.out","w",stdout);
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}