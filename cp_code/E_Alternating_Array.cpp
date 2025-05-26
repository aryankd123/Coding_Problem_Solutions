#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int ops1 = 0;
    for(int i = 0; i < n; i++) {
        if (i % 2 == 0 && a[i] < 0) {
            ops1++;
        }
        if (i % 2 == 1 && a[i] > 0) {
            ops1++;
        }
    }
    
    int ops2 = 0;
    for(int i = 0; i < n; i++) {
        if (i % 2 == 0 && a[i] > 0) {
            ops2++;
        }
        if (i % 2 == 1 && a[i] < 0) {
            ops2++;
        }
    }
    
    cout << min(ops1, ops2) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}