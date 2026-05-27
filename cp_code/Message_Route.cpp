#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9+7;

class Graph {
    bool is_directed;
public:
    vector<vector<int>> adj;
    int n;
    Graph(int n_, bool is_directed_ = true) {
        n = n_;
        is_directed = is_directed_;
        adj.resize(n + 1);
    }
    void add_edge(int u, int v) {
        adj[u].push_back(v);
        if (!is_directed) adj[v].push_back(u);
    }
};

class BFS {
    vector<int> min_dist_from_source;
    vector<bool> visited;
    vector<int> parent; // To store the path
    Graph *g;
public:
    BFS(Graph *g_) {
        g = g_;
        clear();
    }

    void clear() {
        min_dist_from_source.assign(g->n + 1, -1);
        visited.assign(g->n + 1, false);
        parent.assign(g->n + 1, -1);
    }

    void run(int source) {
        queue<int> q;
        q.push(source);
        visited[source] = true;
        min_dist_from_source[source] = 0;
        parent[source] = -1; // Source has no parent

        while (!q.empty()) {
            int cur_node = q.front();
            q.pop();
            for (int adj_node : g->adj[cur_node]) {
                if (!visited[adj_node]) {
                    visited[adj_node] = true;
                    min_dist_from_source[adj_node] = min_dist_from_source[cur_node] + 1;
                    parent[adj_node] = cur_node; // Track parent
                    q.push(adj_node);
                }
            }
        }
    }

    int min_dist(int target) {
        return min_dist_from_source[target];
    }

    bool is_visited(int target) {
        return visited[target];
    }

    vector<int> get_path(int target) {  
        vector<int> path;
        if (!visited[target]) return path; // No path exists
        for (int v = target; v != -1; v = parent[v]) {
            path.push_back(v);
        }
        reverse(path.begin(), path.end());
        return path;
    }
};

void solve() {
    int n, m;
    cin >> n >> m;
    Graph g(n, false);
    
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g.add_edge(x, y);
    }

    BFS bfs(&g);
    bfs.run(1);

    if (bfs.is_visited(n)) {
        cout << bfs.min_dist(n) + 1 << '\n'; 

        vector<int> path = bfs.get_path(n);
        for (int node : path) {
            cout << node << " ";
        }
        cout << '\n';
    } 
    else {
        cout << "IMPOSSIBLE\n";
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}