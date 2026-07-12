#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    int pre=0;
    map<int,int>mp;
    int ans=0;

    for(int i=0;i<n;i++){
        pre=((pre+v[i])%n+n)%n;
        ans+=mp[pre];
        if(pre==0)ans++;
        mp[pre]++;
    }
    
cout<<ans;


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}