#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

   
    vector<int> layer_sizes;
    int total_pieces = 1;
    layer_sizes.push_back(total_pieces);

    for (int i = 2; total_pieces <= 10000; i++) { 
        total_pieces += 8 * (i - 1);
        layer_sizes.push_back(total_pieces);
    }


    int happy = 0;
    int cumulative_sum = 0;

    for (int i = 0; i < n; i++) {
        cumulative_sum += a[i];
        if (binary_search(layer_sizes.begin(), layer_sizes.end(), cumulative_sum)) {
            happy++;
        }
    }

    cout << happy << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}