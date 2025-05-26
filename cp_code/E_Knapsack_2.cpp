#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int N, W;
    cin >> N >> W;

    vector<int> weight(N), value(N);
    for (int i = 0; i < N; i++) cin >> weight[i] >> value[i];

    map<int, int> dp; 
    dp[0] = 0;
    for (int i=0;i<N;i++) {
        int wt=weight[i],p=value[i];

        vector<pair<int,int>> updates;
        for (auto it = dp.rbegin();it!=dp.rend();++it) {
        int cur_wt = it->first;
         int cur_val = it->second;
            if (cur_wt+wt<=W) {
                updates.push_back({cur_wt + wt,cur_val + p});
            }
        }
     for (auto [new_wt, new_val] : updates) {
      dp[new_wt] = max(dp[new_wt], new_val);}
    }
int ans= 0;
 for (auto &[w, v]:dp)ans=max(ans,v);
cout<<ans<<'\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}