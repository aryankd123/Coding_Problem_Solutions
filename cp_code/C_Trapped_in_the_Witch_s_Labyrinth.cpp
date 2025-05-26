#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;
int dx[] = {-1, 1, 0, 0}; // U, D, L, R
int dy[] = {0, 0, -1, 1};
char directions[] = {'U', 'D', 'L', 'R'};

int t, n, m;
vector<string> maze;
vector<vector<bool>> visited;

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y, vector<vector<int>>& component, int comp_id) {
    visited[x][y] = true;
    component[x][y] = comp_id;
    
    int dir = -1;
    if (maze[x][y] == 'U') dir = 0;
    else if (maze[x][y] == 'D') dir = 1;
    else if (maze[x][y] == 'L') dir = 2;
    else if (maze[x][y] == 'R') dir = 3;

    if (dir != -1) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (isValid(nx, ny) && !visited[nx][ny]) {
            dfs(nx, ny, component, comp_id);
        }
    }
}

int solveMaze() {
    vector<vector<int>> component(n, vector<int>(m, -1));
    visited.assign(n, vector<bool>(m, false));
    int comp_id = 0;

    // First pass: Find connected components
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j]) {
                dfs(i, j, component, comp_id++);
            }
        }
    }

    // Count cells in SCCs (cyclic components)
    vector<int> comp_size(comp_id, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            comp_size[component[i][j]]++;
        }
    }

    int trapped_cells = 0;
    for (int size : comp_size) {
        if (size > 1) { // An SCC with more than 1 cell traps Rostam
            trapped_cells += size;
        }
    }

    return trapped_cells;
}

void solve() {
    cin >> t;
    while (t--) {
        cin >> n >> m;
        maze.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> maze[i];
        }

        cout << solveMaze() << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}