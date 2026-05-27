#include <iostream>
using namespace std;
#define int long long
pair<int,int> solve(int l,int r,int k) {
    if (r-l +1 < k) return {0, 0};
    if (r -l +1 == 1) return {l, 1};
    int m =l+(r-l)/2;
    if ((r - l+1)% 2){
        auto left =solve(l,m-1,k);
        return {m+2*left.first +m*left.second,left.second*2 + 1};} 
        else {
        auto left=solve(l, m, k);
        return {2*left.first+m*left.second,left.second*2};
}
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
    int n, k;
    cin >> n >> k;
    auto res = solve(1, n, k);
    cout << res.first << "\n";
    }

    return 0;
}