#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v[i]=x;

    }
    map<int,int>mp;
    mp[n]=n;
    vector<int>ans(n+1,0);
    ans[n]=n;

    for(int i=n-1;i>=1;i--){
        int x=v[i];
        if(mp.find(x)!=mp.end()){
            mp[i]=mp[x];
            ans[i]=mp[i];

        }
        else {mp[i]=x;
        ans[i]=x;}
    }
    for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
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