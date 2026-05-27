#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main() {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int n, m;
     cin >> n >> m;
    
     map<int,  vector<int>> sx, sy;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int c;
             cin >> c;
            sx[c].push_back(i);
            sy[c].push_back(j);
        }
    }
    
    auto solve = [](auto s) {
         int ans = 0;
        for (auto [x, v] : s) {
             sort(v.begin(), v.end());
             int s = 0, c = 0;  
            for (auto i : v) {
                ans += i * c - s;
                s += i;  
                c++;  
            }
        }
        return ans;
    };
    
   int  ans = solve(sx) + solve(sy);
    
     cout << ans << "\n";
    
    return 0;
}