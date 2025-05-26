#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n, x;
    cin >> n >> x;
 
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + v[i];
    }
 
    int count = 0;
 
    unordered_map<int, int> prefix_sum_map;
    
    prefix_sum_map[0] = 1;
 
    for (int r = 1; r <= n; r++) {
        int target = prefix[r] - x;
        
        if (prefix_sum_map.find(target) != prefix_sum_map.end()) {
            count += prefix_sum_map[target];  
        }
        
        prefix_sum_map[prefix[r]]++;
    }
 
    cout << count << '\n';
}
signed main(){
    solve();
    return 0;
}
