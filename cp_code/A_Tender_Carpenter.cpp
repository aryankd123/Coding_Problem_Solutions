#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {cin >> arr[i];}
    bool canRemove=false;
    for(int i = 0; i < n - 1; i++) {
        int mn = min(arr[i], arr[i+1]);
        int mx = max(arr[i], arr[i+1]);
        if(2LL * mn > mx) {canRemove=true;break;}
      }
    if (canRemove) {cout << "YES\n";} 
    else {cout << "NO\n";}
}
signed main() {
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}