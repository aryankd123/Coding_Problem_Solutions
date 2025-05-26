#include <bits/stdc++.h>
using namespace std;
#define int long long
int count(const vector<int>& arr, int start, int low, int high) {
    int left = lower_bound(arr.begin()+start, arr.end(), low)-arr.begin();
    int right = upper_bound(arr.begin()+start, arr.end(), high)-arr.begin();
    return right - left;
}
void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >>a[i];
    }
    int total_sum=accumulate(a.begin(), a.end(), 0LL);
    int lower_bound = total_sum - y;
    int upper_bound= total_sum - x;
    sort(a.begin(), a.end());
    int result = 0;
    for (int i = 0; i < n; i++) {
        int low = lower_bound-a[i];
        int high = upper_bound-a[i];
        result+= count(a,i+1,low,high);
    }
    cout << result << endl;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}