#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> a, res;
vector<vector<int>> g;

void dfs(int u, int p, int plus, int minus) {
    res[u] = a[u] + minus;
    int new_plus = max(0LL, a[u] + minus);
    int new_minus = max(0LL, -a[u] + plus);
    for (int v : g[u]) {
        if (v != p) dfs(v, u, new_plus, new_minus);
    }
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        a.resize(n); for (int &x : a) cin >> x;
        g.assign(n, {});
        for (int i = 0; i < n - 1; ++i) {
            int u, v; cin >> u >> v;
            g[--u].push_back(--v);
            g[v].push_back(u);
        }
        res.assign(n, 0);
        dfs(0, -1, 0, 0);
        for (int i = 0; i < n; ++i)
            cout << res[i] << " \n"[i == n - 1];
    }
}