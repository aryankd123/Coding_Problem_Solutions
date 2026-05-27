#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    
    int count = 1;
    while (n > 3) {
        n = n / 4;
        count *= 2; 
    }
    cout << count << '\n';
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}