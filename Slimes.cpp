#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
     ll n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);

    }
    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        sort(v.begin(),v.end());
        vector<ll> cpy;
        cpy.push_back(v[0]+v[1]);
        ans+=(v[0]+v[1]);

        for(int i=2;i<v.size();i++){
            cpy.push_back(v[i]);
        }

        sort(cpy.begin(),cpy.end());
        v=cpy;


    }
    cout<<ans;
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