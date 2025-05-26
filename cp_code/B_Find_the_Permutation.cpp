#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
        }
    }

    vector<int> in_degree(n, 0); // To track the number of smaller elements before each element in the permutation

    // We will count the number of edges pointing to each vertex to determine their relative order
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (g[i][j] == 1) {
                in_degree[j]++;  // If there's an edge from i to j, increment in_degree of j
            }
        }
    }

    // Now, we need to assign the values based on the in_degree
    vector<int> p(n);
    vector<int> sorted(n);

    // Initialize the sorted array as the indices of the vertices
    iota(sorted.begin(), sorted.end(), 0);

    // Sort the indices by their in-degree (smaller in-degree means a smaller number in the permutation)
    sort(sorted.begin(), sorted.end(), [&in_degree](int i, int j) {
        return in_degree[i] < in_degree[j];
    });

    // Assign the values based on the sorted order of in-degrees
    for (int i = 0; i < n; i++) {
        p[sorted[i]] = i + 1;
    }

    // Output the reconstructed permutation
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}