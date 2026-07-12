#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;


    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }
    
    sort(vp.begin(),vp.end());
    int min_y=INT_MAX;
    int ans=0;

    for(int i=0;i<n;i++){
        int x=vp[i].first;
        int y=vp[i].second;
        if(min_y<y)ans++;
        min_y=min(min_y,y);

    }
    cout<<n-ans;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}