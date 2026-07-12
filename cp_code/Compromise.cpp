#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    // vector<int>v;
    bool fl=0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=0)fl=1;
    }
    if(fl==0)cout<<"Yes";
    else cout<<"No";
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