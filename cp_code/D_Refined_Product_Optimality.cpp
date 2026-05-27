#include <bits/stdc++.h>
using namespace std;
const int MOD = 998244353;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    // Sort both arrays to maximize the product
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Compute the initial product P
    long long P = 1;
    for (int i = 0; i < n; ++i) {
        P = (P * min(a[i], b[i])) % MOD;
    }

    // Print the initial value of P
    cout << P << " ";

    // Process each query
    for (int i = 0; i < q; ++i) {
        int o, x;
        cin >> o >> x;
        --x;  // Convert to 0-based index

        if (o == 1) {
            // Increase a[x] by 1
            a[x]++;
        } else {
            // Increase b[x] by 1
            b[x]++;
        }

        // Recalculate the product P
        P = 1;
        for (int i = 0; i < n; ++i) {
            P = (P * min(a[i], b[i])) % MOD;
        }

        // Output the new value of P after the modification
        cout << P << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}