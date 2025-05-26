#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 2e15;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    sort(v.begin(), v.end());

    vector<int> prefix_sum(n + 1, 0), suffix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        suffix_sum[n - i] = suffix_sum[n - i - 1] + v[i];
    }

    int total_sum = prefix_sum[n];
    int min_removed = INF;

   
    for (int i = 0; i <= k; i++) {
        int smallest_removed = prefix_sum[2 * i]; 
        int largest_removed = suffix_sum[k - i];
        min_removed = min(min_removed, smallest_removed + largest_removed);
    }

 
    int max_sum = total_sum - min_removed;
    cout << max_sum << '\n';
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