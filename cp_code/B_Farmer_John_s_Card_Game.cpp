#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, vector<int>>> cows(n);
    for (int i = 0; i < n; i++) {
        cows[i].first = i + 1; 
        cows[i].second.resize(m);
        for (int j = 0; j < m; j++) {
            cin >> cows[i].second[j];
        }
        sort(cows[i].second.begin(), cows[i].second.end()); 
    }
int top=-1;
    sort(cows.begin(), cows.end(), [](const pair<int, vector<int>>& a, const pair<int, vector<int>>& b) {
        return a.second[0] < b.second[0];
    });
    bool valid = true;
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n ; i++) {
            if(i+1<n){
            if (cows[i].second[j] >= cows[i+1].second[j]) {
                valid = false;
                break;
            }}
            if(cows[i].second[j]<=top){valid=false;break;}
            top=cows[i].second[j];
        }
    }

    if (!valid) {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << cows[i].first << " ";
    }
    cout << endl;
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
