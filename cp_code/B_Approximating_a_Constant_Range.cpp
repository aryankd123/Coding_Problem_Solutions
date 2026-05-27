#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, int> freq; 
    int L = 0, max_len = 0;

    for (int R = 0; R < n; R++) {
        freq[a[R]]++; 

        while (freq.size() > 2 || (freq.size() == 2 && abs(freq.begin()->first - next(freq.begin())->first) > 1)) {
            freq[a[L]]--; 
            if (freq[a[L]] == 0) freq.erase(a[L]); 
            L++;
        }

        max_len = max(max_len, R - L + 1); 
    }

    cout << max_len << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}