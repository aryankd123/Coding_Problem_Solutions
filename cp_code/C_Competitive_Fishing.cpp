#include <bits/stdc++.h>
using namespace std;

bool canDivide(string &s, int n, int k, int m) {
    // Calculate group size
    int groupSize = (n + m - 1) / m; // ceil(n / m)

    int bobScore = 0, aliceScore = 0;
    for (int i = 0; i < n; ++i) {
        int groupIndex = i / groupSize; // Determine group index (0-based)
        if (s[i] == '1') {
            bobScore += groupIndex;
        } else {
            aliceScore += groupIndex;
        }
    }

    return (bobScore - aliceScore) >= k;
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int left = 1, right = n, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canDivide(s, n, k, mid)) {
            result = mid; // Try to minimize m
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}