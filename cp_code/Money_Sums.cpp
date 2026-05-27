#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int &x : coins) cin >> x;

    int maxSum = accumulate(coins.begin(), coins.end(), 0);
    vector<bool> dp(maxSum + 1, false);
    dp[0] = true; 

    for (int coin : coins) {
        for (int j = maxSum; j >= coin; j--) {
            dp[j] = dp[j] || dp[j - coin];
        }
    }

    vector<int> results;
    for (int i = 1; i <= maxSum; i++) {
        if (dp[i]) results.push_back(i);
    }

    cout << results.size() << '\n';
    for (int sum : results) cout << sum << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}