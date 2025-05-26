#include <bits/stdc++.h>
using namespace std;
#define int long long

int max_fullness(int t, int a, int b, int flag, int fullness, vector<vector<int>>& dp) {
    if (fullness > t) return 0; 
    if (dp[fullness][flag] != -1) return dp[fullness][flag];
    
    int result = fullness; 
    if (fullness >= (t / 2) && flag == 0) {
        result = max(result, max_fullness(t, a, b, 1, fullness / 2, dp));
    }
    result = max(result, max_fullness(t, a, b, flag, fullness + a, dp));
    result = max(result, max_fullness(t, a, b, flag, fullness + b, dp));
   
    return dp[fullness][flag] = result;
}

void solve() {
    ifstream fin("feast.in");
    ofstream fout("feast.out");

    int t, a, b;
    fin >> t >> a >> b;

    vector<vector<int>> dp(t + 1, vector<int>(2, -1));
    int ans = max_fullness(t, a, b, 0, 0, dp);
    
    fout << ans << '\n';

    fin.close();
    fout.close();
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}