#include <bits/stdc++.h>
using namespace std;
#define int long long 
struct project{
    int start,end,inc;

};
bool cmp(const project&a, const project& b){
    return a.start<b.start;

}
void solve() {
    int n;
    cin>>n;

    vector<project>v(n);
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;

        v[i].start=x;
        v[i].end=y;
        v[i].inc=z;

    }
    sort(v.begin(),v.end(),cmp);
    vector<int>starts;
    for(auto val:v){
        starts.push_back(val.start);
    }
    sort(starts.begin(),starts.end());
    vector<int>dp(n+1,0);

    for(int i=n-1;i>=0;i--){
        dp[i]=dp[i+1];
        auto it=upper_bound(starts.begin(),starts.end(),v[i].end);
        int dist= distance(starts.begin(),it);
        int take = v[i].inc+dp[dist];
        dp[i]=max(dp[i],take);

        // dp[i+1]=max(dp[])
    }

    cout<<dp[0];
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}