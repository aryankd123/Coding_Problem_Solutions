#include <bits/stdc++.h>
using namespace std;

bool can_form(vector<int>& v, int n, double c, double w) {
    double sum_squares = 0;
    double sum_sizes = 0;
    for (int i = 0; i < n; ++i) {
        sum_squares += (double)v[i] * v[i];
        sum_sizes += (double)v[i];
    }

    // Calculate the total cardboard used
    double total_cardboard = sum_squares + 4 * w * sum_sizes + 4 * n * w * w;
    
    return total_cardboard == c;  // Equality check, may introduce rounding errors
}

// Binary search function to find the correct w
int binary_search_w(vector<int>& sizes, int n, double c) {
    int l = 1, r = 1e9;  // We assume the max value of w won't exceed 1e9
    int result = -1;
    
    while (l <= r) {
        int m = (l + r) / 2;
        
        if (can_form(sizes, n, c, m)) {
            result = m;
            r = m - 1;  // Try to find smaller w
        } else {
            l = m + 1;  // Increase w
        }
    }
    
    return result;
}

void solve() {
    int n;
    double c;
    cin >> n >> c;
    vector<int> sizes(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> sizes[i];
    }

    int w = binary_search_w(sizes, n, c);
    cout << w << '\n';
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