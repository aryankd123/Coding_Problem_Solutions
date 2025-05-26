#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);

void solve() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Reduce l iteratively
    while (l > n) {
        l /= 2;
    }

    cout << a[l] << '\n';  // Return correct a[l]
}

signed main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}