#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> points(n);
    map<int, set<int>> x_to_y;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = {x, y};
        x_to_y[x].insert(y);
    }

    int min_area = LLONG_MAX;
    int max_area = 0;
    bool found = false;

    for (auto it1 = x_to_y.begin(); it1 != x_to_y.end(); ++it1) {
        for (auto it2 = next(it1); it2 != x_to_y.end(); ++it2) {
            int x1 = it1->first;
            int x2 = it2->first;

            vector<int> common_y;
            set_intersection(it1->second.begin(), it1->second.end(),
                             it2->second.begin(), it2->second.end(),
                             back_inserter(common_y));

            if (common_y.size() >= 2) {
                found = true;
                for (int i = 0; i < common_y.size(); i++) {
                    for (int j = i + 1; j < common_y.size(); j++) {
                        int y1 = common_y[i];
                        int y2 = common_y[j];

                        int area = (x2 - x1) * (y2 - y1);
                        min_area = min(min_area, area);
                        max_area = max(max_area, area);
                    }
                }
            }
        }
    }

    if (found) {
        cout << max_area - min_area << endl;
    } else {
        cout << -1 << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}