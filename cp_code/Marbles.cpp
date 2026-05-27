#include <bits/stdc++.h>
using namespace std;
#define int long long

long double choose(int n, int r) {
    if (r > n || r < 0) return 0; 
    if (r == 0 || r == n) return 1;  

    long double res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res; 
}

void solve() {
    int n, k;
    cin >> n >> k;
    cout << fixed << setprecision(0) << choose(n - 1, k - 1) << '\n';
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