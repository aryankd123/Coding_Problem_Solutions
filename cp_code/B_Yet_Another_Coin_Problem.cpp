#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100;
vector<int> v = {1, 3, 6, 10, 15};
int dp[N];

void solve() {
    int n;
    cin >> n;
    int ans = n;
    int r = n % v.back();
    int cur = n / v.back();
    for (int i = r; i <= n && i < N; i += v.back()) {
        ans = min(ans, cur + dp[i]);
        cur--;
    }
    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    for (int i = 1; i < N; i++) dp[i] = N;
    for (int x = 0; x < N; x++) {
        for (int y : v) {
            if (x + y < N) dp[x + y] = min(dp[x + y], dp[x] + 1);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}