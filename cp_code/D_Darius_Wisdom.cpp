#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    int count2 = 0, count1 = 0, count0 = 0;
    vector<int> v(n);
    map<int, int> mp;

    // Read the array and count 0s, 1s, and 2s
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) count0++;
        else if (v[i] == 1) count1++;
        else if (v[i] == 2) count2++;
        mp[i] = v[i];
    }

    vector<pair<int, int>> v1; // To store the moves

    // Step 1: Handle 2 -> 1 and 2 -> 0 swaps
    for (auto it = mp.rbegin(); count2 > 0 && it != mp.rend(); ++it) {
        if (it->second == 2) {
            count2--;
            // Move 2 -> 1
            auto it1 = find_if(mp.begin(), mp.end(), [](const pair<int, int>& p) {
                return p.second == 1;
            });
            if (it1 != mp.end()) {
                v1.push_back({it->first + 1, it1->first + 1}); // Store 1-based index
                swap(it->second, it1->second);
            }
        }
    }

    // Step 2: Handle 1 -> 0 swaps
    for (auto it = mp.rbegin(); count1 > 0 && it != mp.rend(); ++it) {
        if (it->second == 1) {
            count1--;
            // Move 1 -> 0
            auto it1 = find_if(mp.begin(), mp.end(), [](const pair<int, int>& p) {
                return p.second == 0;
            });
            if (it1 != mp.end()) {
                v1.push_back({it->first + 1, it1->first + 1}); // Store 1-based index
                swap(it->second, it1->second);
            }
        }
    }

    // Output the results
    cout << v1.size() << endl;
    for (const auto& move : v1) {
        cout << move.first << " " << move.second << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}