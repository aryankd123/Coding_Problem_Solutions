#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    
    int total_chocolate = 0;
    for (int i = n; i >= 1; i -= 2) {
        total_chocolate += 4 * i;  // Add the perimeter of the current square
    }

    cout << total_chocolate << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}