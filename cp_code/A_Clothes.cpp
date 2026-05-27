#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> price(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> price[i];
    }

    vector<vector<int>> adj(n + 1); 
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int min_cost = LLONG_MAX;

    for (int u = 1; u <= n; u++) {
        for (int v : adj[u]) {
            if (v > u) { 
                for (int w : adj[v]) {
                    if (w > v && find(adj[u].begin(), adj[u].end(), w) != adj[u].end()) {
                    
                        min_cost = min(min_cost, price[u] + price[v] + price[w]);
                    }
                }
            }
        }
    }

    if (min_cost == LLONG_MAX) {
        cout << -1 << '\n';
    } else {
        cout << min_cost << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}