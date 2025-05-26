#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int cycle_distance = a + b + c;

    int full_cycles = n / cycle_distance;
    int total_walked = full_cycles * cycle_distance;

    if (total_walked >= n) {
        cout << full_cycles * 3 << endl; 
        return;
    }

    total_walked += a;
    if (total_walked >= n) {
        cout << full_cycles * 3 + 1 << endl;
        return;
    }

    total_walked += b;
    if (total_walked >= n) {
        cout << full_cycles * 3 + 2 << endl;
        return;
    }

  
    total_walked += c;
    cout << full_cycles * 3 + 3 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}