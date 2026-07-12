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
    sort(v.begin(),v.end());
    int prefix=0;

    for(int i=0;i<n-1;i++){
        prefix+=v[i];

    }
    if(prefix<v[n-1]){cout<<2*v[n-1];return ;}
    cout<<prefix+v[n-1];
}

signed  main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}