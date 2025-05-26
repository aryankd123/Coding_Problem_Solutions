#include <bits/stdc++.h>
using namespace std;

long getSpecialSubarrays(vector<long>& efficiency, long k) {
    long n = efficiency.size();
    long x = efficiency[k - 1]; 
    vector<long> arr(n);
    for (long i = 0; i < n; ++i) {
        if (efficiency[i] > x) arr[i] = 1;
        else if (efficiency[i] < x) arr[i] = -1;
        else arr[i] = 0;
    }

    map<long, long> cnt;
    long sum = 0;
    cnt[0] = 1;
    for (long i = k - 2; i >= 0; --i) {
        sum += arr[i];
        cnt[sum]++;
    }

    long ans = 0;
    sum = 0;
    for (long i = k - 1; i < n; ++i) {
        sum += arr[i];
        if (cnt.count(-sum)) ans += cnt[-sum];
    }
    return ans;
}

void solve() {
    long n, k;
    cin >> n >> k;
    vector<long> v(n);
    for (long i = 0; i < n; ++i) {
        cin >> v[i];
    }
    long anss = getSpecialSubarrays(v, k);
    cout << anss << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
