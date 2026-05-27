#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> v1, v2;
        for (int i = 0; i < n; i++) {
            if (i < r) {
                v1.push_back(a[i]);
            }
            if (i >= (l - 1)) {
                v2.push_back(a[i]);
            }
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        int ans1 = 0, ans2 = 0;
        int x = r - l + 1;
        
        for (int i = 0; i < x; i++) {
            ans1 += v1[i];
            ans2 += v2[i];
        }
        
        cout << min(ans1, ans2) << '\n';
    }
}