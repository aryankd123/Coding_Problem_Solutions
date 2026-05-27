#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Read input
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    // Calculate the maximum number of sets that can be formed
    int red_sets = x / a;  // Maximum sets based on red candies
    int blue_sets = y / b;  // Maximum sets based on blue candies

    // The total number of gift sets is the sum of both
    int max_sets = min(red_sets, blue_sets);

    // Output the result
    cout << max_sets << "\n";
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int t;
    cin >> t;  // Number of test cases

    // Solve each test case
    while (t--) {
        solve();
    }

    return 0;
}