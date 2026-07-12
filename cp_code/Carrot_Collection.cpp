#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    vector<int> prefix(n+2,0);

    for(int i=1;i<=n;i++){
        prefix[i]+=(prefix[i-1]+v[i-1]);

    }
    int maxi=prefix[l-1];
    maxi=max(maxi,prefix[n]-prefix[r]);
    cout<<maxi<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}