#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,a,b,c;
    cin>>n>>m>>a>>b>>c;
    int flag=min(n,m);
    int ans=(n-flag)*a+(m-flag)*b+flag*c;
    cout<<ans<<'\n';
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