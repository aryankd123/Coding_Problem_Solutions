#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int ans=0;
    int div=5;
    while(div<=n){
        ans+=(n/div);
        div*=5;
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