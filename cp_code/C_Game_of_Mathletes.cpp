#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x < m) mp[x]++;
    }

    int ct = 0;
    for(auto it = mp.begin(); it != mp.end(); ){
        int key = it->first;
        int complement = m - key;
        if(mp.find(complement) != mp.end() && mp[complement] > 0){
            if(key == complement){
                ct += mp[key] / 2; 
                mp.erase(it++); 
            } else {
                int pairs = min(mp[key], mp[complement]);
                ct += pairs;
                mp[key] -= pairs;
                mp[complement] -= pairs;
                if(mp[key] == 0) mp.erase(it++);
                else it++;
                if(mp[complement] == 0) mp.erase(mp.find(complement)); 
            }
        } else {
            ++it; 
        }
    }

    cout << ct << '\n';
} 

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //precompute()
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
