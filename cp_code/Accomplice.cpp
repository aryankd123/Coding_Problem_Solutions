#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve() {
   
    
    int n;
    long long d;
    if (!(cin >> n >> d)) return;
    const int MAX_TIME = 1000000;
    vector<long long> diff(MAX_TIME + 2, 0);

    for (int i = 0; i < n; ++i) {
        long long s, t;
    cin >>s>>t;
        
    int  start_valid = s;
    int end_valid = t - d;
    if (start_valid <= end_valid) {
        diff[start_valid]++;
            if (end_valid + 1 <= MAX_TIME) {
                diff[end_valid + 1]--;
            }
        }
    }

    int  current_active= 0;
    int total_c = 0;

    for (int x = 1; x<=MAX_TIME; ++x) {
        current_active += diff[x];
        if (current_active >= 2) {
            total_c += (current_active * (current_active - 1)) / 2;
        }
    }

    cout << total_c <<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}