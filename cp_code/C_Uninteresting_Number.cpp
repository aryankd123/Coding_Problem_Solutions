#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n;
    cin >> n;

    int d_sum = 0; 
    int count2 = 0, count3 = 0; 

    for (char digit : n) {
        int num = digit - '0'; 
        d_sum += num;

        if (num == 2) count2++;
        else if (num == 3) count3++;
    }

    
    if (d_sum % 9 == 0) {
        cout << "YES" << '\n';
        return;
    }

    
    for (int i = 0; i <= count2; i++) {
        for (int j = 0; j <= count3; j++) {
            int new_sum = d_sum + i * 2 + j * 6;
            if (new_sum % 9 == 0) {
                cout << "YES" << '\n';
                return;
            }
        }
    }

   
    cout << "NO" << '\n';
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