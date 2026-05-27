#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve() {
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(m), sum(m + 1, 0);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        sum[i + 1] = (sum[i] + b[i]) % c;
    }

    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        int s = max(0LL, m + i - n);  
        int e = min(i, m - 1); 

        res[i] = (a[i] + sum[e + 1] - sum[s] + c) % c;
    }

    for (int i = 0; i < n; i++) cout << res[i] << " ";
    cout << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
    return 0;
}