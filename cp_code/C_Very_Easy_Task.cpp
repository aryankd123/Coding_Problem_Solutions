#include <bits/stdc++.h>
using namespace std;
#define int long long 
int binSearch(int n, int x, int y) {
    int l = -1;
    int r = n * max(x, y)+10; 
    while (l + 1 < r) {
        int m = (l )+r/ 2;

       
        int no = (m / x) + (m / y);

        if (no >= n - 1) 
            r = m; 
        else
            l = m; 
    }
    return r + min(x, y); 
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int ans = binSearch(n, x, y);
    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}