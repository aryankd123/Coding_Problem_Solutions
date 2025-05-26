#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);

const int MAX_N = 1000;
const int MAX_VAL = 10000; 

bitset<MAX_N + 1> present[MAX_VAL + 1];

void solve() {
    int n;
    scanf("%lld", &n);

    for (int set_id = 0; set_id < n; set_id++) {
        int c;
        scanf("%lld", &c);

        while (c--) {
            int x;
            scanf("%lld", &x);
            present[x][set_id] = 1;
        }
    }

    int q;
    scanf("%lld", &q);

    while (q--) {
        int i, j;
        scanf("%lld %lld", &i, &j);

        if ((present[i] & present[j]).any())
            printf("Yes\n");
        else
            printf("No\n");
    }
}

signed main() {
    FAST_IO;
    solve();
    return 0;
}