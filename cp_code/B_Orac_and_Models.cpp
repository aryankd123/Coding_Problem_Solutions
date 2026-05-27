#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    
    vector<int> s(n + 1); 
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    vector<int> dp(n + 1, 1); 

    for (int i = 1; i <= n; i++) {
        for (int j = 2 * i; j <= n; j += i) {
            if (s[i] < s[j]) {  
                dp[j] = max(dp[j], dp[i] + 1);
            }
        }
    }
    
    cout << *max_element(dp.begin() + 1, dp.end()) << '\n';
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}