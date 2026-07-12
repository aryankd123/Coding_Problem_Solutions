#include <bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, vector<vector<int>>& adj, vector<vector<int>>& dp) {
    int sum_of_optimal_children = 0;
    
    // Step 1: Pehle saare bacchon ka DP calculate kar lo (Bottom-Up)
    for (int child : adj[node]) {
        if (child == parent) continue; // Wapas parent par nahi jana
        
        dfs(child, node, adj, dp);
        // optimal of child = max(child matched, child not matched)
        sum_of_optimal_children += max(dp[child][0], dp[child][1]); 
    }
    
    // Step 2: DP[node][0] -> Node is NOT matched
    // Sab bacchon ka best le lo
    dp[node][0] = sum_of_optimal_children;
    
    // Step 3: DP[node][1] -> Node IS matched with EXACTLY ONE child
    dp[node][1] = 0;
    for (int child : adj[node]) {
        if (child == parent) continue;
        
        // Agar main is 'child' ke sath match karta hoon:
        // Total = (Baaki bacchon ka optimal sum) + (Is child ka not-matched state) + 1 edge
        int current_match = (sum_of_optimal_children - max(dp[child][0], dp[child][1])) + dp[child][0] + 1;
        
        dp[node][1] = max(dp[node][1], current_match);
    }
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> adj(n + 1);
    
    // dp[i][0] = max matching in subtree i, i is NOT matched to any child
    // dp[i][1] = max matching in subtree i, i IS matched to exactly one child
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));

    for (int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // DFS root (node 1) se start hoga. Uska parent 0 (dummy) bhej do.
    dfs(1, 0, adj, dp);

    // Answer root ke dono cases ka maximum hoga
    cout << max(dp[1][0], dp[1][1]) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}