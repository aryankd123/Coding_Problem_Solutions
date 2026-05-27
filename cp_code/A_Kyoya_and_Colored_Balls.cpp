#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;
const int MAXN = 1005;

int fac[MAXN], inv[MAXN];

// Function to compute power mod (Fermat’s Little Theorem)
int bin_exp(int base, int exp, int mod) {
    int res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

// Precompute factorials and modular inverses
void precompute() {
    fac[0] = inv[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fac[i] = (fac[i-1] * i) % MOD;
        inv[i] = bin_exp(fac[i], MOD-2, MOD);  // Modular inverse using bin_exp
    }
}

// Function to compute nCr % MOD
int nCr(int n, int r) {
    if (r > n) return 0;
    return fac[n] * inv[r] % MOD * inv[n-r] % MOD;
}

void solve() {
    int k;
    cin >> k;
    
    vector<int> c(k);
    int total_balls = 0;
    int ways = 1;

    for (int i = 0; i < k; i++) {
        cin >> c[i];
        total_balls += c[i];

        if (i > 0) {
            ways = (ways * nCr(total_balls - 1, c[i] - 1)) % MOD;
        }
    }

    cout << ways << '\n';
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0);
    precompute();
    solve();
    return 0;
}