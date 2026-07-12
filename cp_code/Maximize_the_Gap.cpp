#include <bits/stdc++.h>
using namespace std;
#define int long long 
typedef pair<int,int>pi ;

bool is_valid(vector<pi>& v,int x ,int k){
    int n=v.size();
    int ct=1;
    int last_r= v[0].second;

    for(int i=0;i<n-1;i++){
        if(v[i+1].first-last_r>=x){ct++;last_r=v[i+1].second;}
    }
    return ct>=k;
}
void solve() {
    int n,k;
    cin>>n>>k;
    vector<pi>v;

    int l=1;
    int r= 1e9+10;
    // vector<pi>v;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;

        v.push_back({x,y});
    
    }
        sort(v.begin(), v.end(),
         [](const pair<long long, long long>& a, const pair<long long, long long>& b) {
        return a.second < b.second;
            });

int ans=-1;

    while(l<=r){
        int mid =l+(r-l)/2;
        if(is_valid(v,mid,k)){
            ans=max(ans,mid);
            l =mid+1;

        }
        else r=mid-1;

    }


    cout<<ans;
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