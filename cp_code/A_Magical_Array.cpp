#include <bits/stdc++.h>
using namespace std;
// #define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count = 0;
    int left = 0;

    while (left < n) {
        int min_val = v[left];
        int max_val = v[left];
        int right = left;

        // Expand the window [left, right] as long as the condition holds
        while (right < n && v[right] >= min_val && v[right] <= max_val) {
            min_val = min(min_val, v[right]);
            max_val = max(max_val, v[right]);
            if (min_val == max_val) {
                count += (right - left + 1);  // Count all subarrays ending at 'right'
            }
            right++;
        }
        left++;
    }

    cout << count << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}