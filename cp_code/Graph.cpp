#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<vector<bool>> adj(n, vector<bool>(n, false));

    for (int i = 0; i < n; i++) {
        int baba;
        cin>>baba;
        int k;
        cin >> k;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            adj[i][x - 1] = true; 
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j];  
            if (j < n - 1) cout << " "; 
        }
        cout << '\n'; 
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}