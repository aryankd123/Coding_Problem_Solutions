#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_valid(int n, int m, int k, int bench_len) {
    int max_desks = (m / bench_len) * n;
    if((m/bench_len)*bench_len+(m/bench_len)<m)max_desks+=(m-(m/bench_len)*bench_len+(m/bench_len))*n;
    return max_desks >= k;
}

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    int left = 1, right = k, answer = k;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (is_valid(n, m, k, mid)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    cout << answer << '\n';
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