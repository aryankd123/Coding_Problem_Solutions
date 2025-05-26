#include <bits/stdc++.h>
using namespace std;

const int highest = 1e6 + 9;
int a[highest];

void precompute() {
    for (int i = 1; i < highest; i++) {
        a[i] = 0;
    }
    
    for (int i = 1; i < highest; i++) {
        for (int j = i; j < highest; j += i) {
            a[j]++;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    cout << a[n] << '\n';
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}