#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> prefix(n), suffix(n);

    prefix[0] = v[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] + v[i];
    }

    suffix[n-1] = v[n-1];
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i+1] + v[i];
    }

    int min_sum = LLONG_MAX;  
    int index = -1;

    for (int i = 0; i < n; i++) {
        int current_sum = prefix[i] + suffix[i];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            index = i + 1; 
        }
    }

    cout << index << '\n';
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}