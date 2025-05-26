#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    int ct = 0, flipping = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (!flipping) {
                ct++;
                flipping = 1;
            }
        } else {
            flipping = 0;
        }
    }
    cout << ct << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    solve();

    return 0;
}