#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int x, n, m;
    cin >> x >> n >> m;
    
    int min_x = x, max_x = x;
    
    int temp_x = x, temp_n = n, temp_m = m;
    while (temp_n > 0 && temp_x > 0) {
        temp_x /= 2;
        temp_n--;
    }
    while (temp_m > 0 && temp_x > 0) {
        temp_x = (temp_x + 1) / 2;
        temp_m--;
    }
    min_x = temp_x;
    
    temp_x = x, temp_n = n, temp_m = m;
    while (temp_m > 0 && temp_x > 0) {
        temp_x = (temp_x + 1) / 2;
        temp_m--;
    }
    while (temp_n > 0 && temp_x > 0) {
        temp_x /= 2;
        temp_n--;
    }
    max_x = temp_x;
    
    cout << min_x << " " << max_x << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}