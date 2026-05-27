#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;
const int MAXN = 2e6 + 10;

int fact[MAXN], invFact[MAXN];

int bin_multiply(int a, int b) {
    int ans = 0;
    a %= M;
    while (b) {
        if (b & 1) ans = (ans + a) % M;
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

int bin_exp(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = bin_multiply(res, a);
        a = bin_multiply(a, a);
        b >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = bin_multiply(fact[i - 1], i);
        invFact[i] = bin_exp(fact[i], M - 2);
    }
}

int nCr(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;
    
    return bin_multiply(bin_multiply(fact[n], invFact[r]), invFact[n - r]);
}

void solve() {
    int N, K;
    cin >> N >> K;
    
    int totalWays = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            int ways = nCr(K + abs(j - i), K);
            if (i == j) {
                totalWays = (totalWays + ways) % M;
            } else {
                totalWays = (totalWays + 2 * ways) % M;
            }
        }
    }
    
    cout << totalWays << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    precompute();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
