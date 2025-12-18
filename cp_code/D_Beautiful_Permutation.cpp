#include <bits/stdc++.h>
using namespace std;
#define int long long

int ask(int type, int l, int r) {
   
    cout << type << " " << l << " " << r << endl;
    cout.flush();
    int res; 
    if (!(cin >> res)) exit(0);
    return res;
}

int pref_increments(int m) {

    int sum_mod = ask(2, 1, m);
    int sum_org = ask(1, 1, m); 
    return sum_mod - sum_org;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 int t; 
if (!(cin >> t)) return 0;
while (t--) {
    int n; 
cin >> n;
        long long S = (long long)n * (n + 1) / 2;
long long A = ask(2, 1, n); 
    long long k = A - S;       
    int lo = 1, hi = n, L = n;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            long long Fmid = pref_increments(mid);
            if (Fmid >= 1) { 
                L = mid; 
                hi = mid - 1; 
            } else { 
                lo = mid + 1; 
            }
        }
     int R = (int)(L + k - 1);
    cout << "! " << L << " " << R << endl;
cout.flush();
    }return 0;
}
