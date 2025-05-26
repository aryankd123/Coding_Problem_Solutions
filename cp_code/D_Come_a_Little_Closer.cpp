#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int, int>> pts(n);
        for (auto &[x, y] : pts) cin >> x >> y;

        vector<int> xs, ys;
        for (auto &[x, y] : pts) {
            xs.push_back(x);
            ys.push_back(y);
        }

        sort(xs.begin(), xs.end());
        sort(ys.begin(), ys.end());

        int min_area = (xs.back() - xs[0] + 1) * (ys.back() - ys[0] + 1);

        // Use multiset for fast removal & insertion
        multiset<int> xset, yset;
        for (auto &[x, y] : pts) {
            xset.insert(x);
            yset.insert(y);
        }

        for (auto &[x, y] : pts) {
            xset.erase(xset.find(x));
            yset.erase(yset.find(y));

            int minx = *xset.begin(), maxx = *xset.rbegin();
            int miny = *yset.begin(), maxy = *yset.rbegin();

            int area = (maxx - minx + 1) * (maxy - miny + 1);
            min_area = min(min_area, area);

            xset.insert(x);
            yset.insert(y);
        }

        cout << min_area << '\n';
    }
    return 0;
}