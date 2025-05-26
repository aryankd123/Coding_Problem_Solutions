#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest = 1e6 ;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int mini = min(v[0], v[n-1]);  

    for (int i = 0; i < n-2; i++) { 
       
        if (v[i+2] >= v[i]) {
            mini = min(mini, v[i + 2]);  
            i++;  
        } 
        
        else if (v[i+1] < v[i] && v[i+2] < v[i]) {
            mini = min(mini, max(v[i+1], v[i+2]));  
            if (v[i+2] >= v[i+1]) {
                i++;  
            }
        } 
       
        else {
            mini = min(mini, v[i]);
        }
    }

    cout << mini << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}