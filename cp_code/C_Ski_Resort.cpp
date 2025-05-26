#include <bits/stdc++.h>
using namespace std;
#define int long long

// int nCr(int n, int r) {
//     if (r > n) return 0;
//     if (r == 0 || r == n) return 1;
//     r = min(r, n - r);  // Optimization to use symmetry property
//     int num = 1, denom = 1;
//     for (int i = 0; i < r; ++i) {
//         num *= (n - i);
//         denom *= (i + 1);
//     }
//     return num / denom;
// }

void solve() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> ans;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > q) {
            if (i - flag >= k) {
                ans.push_back(i - flag);
            }
            flag = i + 1;
        }
    }
    if (ans.size() == 0 || n-flag>=k) ans.push_back(n-flag);

// for(int i=0;i<ans.size();i++){cout<<ans[i]<<" ";}
// cout<<'\n';


int sum = 0;
for (int i=0;i<ans.size();i++) {
        if(ans[i]>=k){
        if((ans[i]-k+1)%2==0){sum+=((ans[i]-k+1)/2)*(ans[i]-k+2);}
        else sum+=(ans[i]-k+1)*((ans[i]-k+2)/2);}
    }

    cout << sum << '\n';
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}