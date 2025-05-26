#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,m;
    cin >>n>>m;

    vector<int> x(n), r(n);
 for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> r[i];
  map<int,pair<int, int>> mp; 
    for (int i = 0; i < n; i++) {
        int cx = x[i], rad=r[i];
        for (int dx = -rad; dx <= rad; dx++) {
     int x_coord =cx+dx;
int y_max=sqrt(rad * rad-dx*dx); 
            if (mp.find(x_coord) == mp.end()) {
    mp[x_coord] = {-y_max,y_max }; 
            } else {
     mp[x_coord].first=min(mp[x_coord].first, -y_max);
        mp[x_coord].second=max(mp[x_coord].second, y_max);
    } }
    }
    int t_c = 0;
    for (auto &[_,range]:mp) {
        t_c +=(range.second-rangine.first+1);
    }
    cout <<t_c<< '\n';
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}