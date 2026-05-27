#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    
    int ans = 0;

    for (int i = 0; i < n; i++) {
        // Case 1: When both teams win, i.e. "1 1"
        if (s1[i] == '1' && s2[i] == '1') {
            // Skip until you find a valid "0" in either of the strings
            while (i < n && !(s1[i] == '0' || s2[i] == '0')) {
                i++;
            }
            if (i < n) {
                ans += 2;  // Valid match found, so we add 2 points
            }
        }
        // Case 2: One team wins and the other loses, i.e. "1 0" or "0 1"
        else if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0')) {
            ans += 2;  // Add 2 points for a valid match where one wins and the other loses
        }
        // Case 3: Both teams lose, i.e. "0 0"
        else if (s1[i] == '0' && s2[i] == '0') {
            // Skip until you find a match where at least one team wins
            while (i < n && !(s1[i] == '1' || s2[i] == '1')) {
                i++;
                ans += 1;  // Add 1 point for valid "0 0" match
            }
        }
    }
    cout << ans << '\n';  // Output the total score
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();  // Solve each test case
    }
    
    return 0;
}