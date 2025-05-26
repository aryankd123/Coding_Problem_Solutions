#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
int k, l1, r1, l2, r2;
cin >> k >> l1 >> r1 >> l2 >> r2;
vector<int> pp;
int p = 1;
while (p <= r2) {
        pp.push_back(p);
        if (p >r2 / k) break;
        p *= k;
}

int count = 0;

for (auto power : pp) {
int x_m = max(l1,ceil(l2/ power));
int x_ma = min(r1,floor(r2/power));

if (x_m <= x_ma) {
    count += (x_ma-x_m + 1);
    }
    }
    cout << count << endl;
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