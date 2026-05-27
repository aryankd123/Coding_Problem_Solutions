#include <bits/stdc++.h>
using namespace std;

#define int long long

// Function to compute ceiling of i / k
int ceil_div(int i, int k) {
    return (i + k - 1) / k;
}

void solve() {
    int n, k;
    cin >> n >> k;

    // Initialize the answer to 0
    int ones = 0;

    // For each index from 1 to n, calculate the number of ones required
    for (int i = 1; i <= n; i++) {
        // We need at least ceil(i / k) ones in both first i elements and last i elements
        ones += ceil_div(i, k);
    }

    cout << ones << "\n";
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