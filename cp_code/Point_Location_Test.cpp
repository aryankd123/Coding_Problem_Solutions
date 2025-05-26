#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int cross_product = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    if (cross_product > 0) cout << "LEFT\n";
    else if (cross_product < 0) cout << "RIGHT\n";
    else cout << "TOUCH\n";
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