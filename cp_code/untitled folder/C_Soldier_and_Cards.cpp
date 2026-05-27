#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; 
    cin >> n;
    deque<int> dq1, dq2;
    int k1;
     cin >> k1;
    while (k1--) {
        int x; cin >> x;
        dq1.push_back(x);
    }
    int k2; 
    cin >> k2;
    while (k2--) {
        int x; 
        cin >> x;
        dq2.push_back(x);
    }

    set<pair<deque<int>,deque<int>>> seen;
    int ct = 0;

    while (!dq1.empty() && !dq2.empty()) {
        if (seen.count({dq1, dq2})) {
            cout << -1 << "\n";
            return;
        }
        seen.insert({dq1, dq2});

        int a = dq1.front(); dq1.pop_front();
        int b = dq2.front(); dq2.pop_front();

        if (a > b) {
            dq1.push_back(b);
            dq1.push_back(a);
        } else {
            dq2.push_back(a);
            dq2.push_back(b);
        }
        ct++;
    }

    cout << ct << " " << (dq1.empty() ? 2 : 1) << "\n";
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}