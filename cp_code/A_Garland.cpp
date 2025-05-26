#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin >> s;

    // Check if all bulbs are the same color
    if (s[0] == s[1] && s[1] == s[2] && s[2] == s[3]) {
        cout << -1 << endl;
        return;
    }

    // If there are 2 distinct colors
    set<char> unique_colors(s.begin(), s.end());
    if (unique_colors.size() == 2) {
        cout << 2 << endl;
    }
    // If there are 3 or more distinct colors, we can solve with 4 operations
    else if (unique_colors.size() == 3 || unique_colors.size() == 4) {
        cout << 4 << endl;
    }
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