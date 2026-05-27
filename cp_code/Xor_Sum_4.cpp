#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAX_BITS 32

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    long long result = 0;

    // Loop through each bit position
    for (int bit = 0; bit < MAX_BITS; bit++) {
        long long count_ones = 0;

        // Count the number of elements with the current bit set to 1
        for (int i = 0; i < n; i++) {
            if (A[i] & (1 << bit)) {
                count_ones++;
            }
        }

        long long count_zeros = n - count_ones;

        // Each differing pair at this bit contributes (1 << bit) to the result
        long long contribution = count_ones * count_zeros % MOD * (1 << bit) % MOD;

        // Add this bit contribution to the result
        result = (result + contribution) % MOD;
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        solve();
    

    return 0;
}