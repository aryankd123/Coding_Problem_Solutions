#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k) {
    int survivor = 0; 
    
    for (int i = 2; i <= n; i++) {
        survivor = (survivor + k) % i;
    }
    return survivor + 1;
}
void solve() {
    int n,k;
    cin>>n>>k;
    cout<<josephus(n,k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("joseph.in","r",stdin);
    freopen("joseph.out","w",stdout);

    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}