#include <bits/stdc++.h>
using namespace std;
#define int long long

int fib(int a, int b, int c, int d, int e) {
    int ct = 0;
if (c == a+b) ct++;
    if (d == b+c) ct++;
if (e == c+d) ct++;
    return ct;
}

void solve() {
    int a,b,d,e;
    cin >> a >>b>>d>>e;
    int m = 0;
    int c = a +b;
    m = fib(a,b,c,d,e);
    c = d - b;
    m = max(m, fib(a,b,c,d,e));
     c = e -d;m = max(m, fib(a,b, c, d, e));
     cout <<m << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}