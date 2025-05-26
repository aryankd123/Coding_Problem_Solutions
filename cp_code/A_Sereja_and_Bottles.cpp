#include <bits/stdc++.h>
using namespace std;
// #define int long long

void solve() {
    int n;
    cin >> n;

    unordered_map<int, int> mp1;
    unordered_map<int, int> mp;
    unordered_map<int,int> mp3;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        mp1[x]++;
        if (x != y) mp[y]++;
        if(x==y)mp3[x]++;
    }

    int a = 0;
    for (auto it = mp.begin(); it != mp.end(); ) {
        auto it1 = mp1.find(it->first);
        if (it1 == mp1.end()) {
            it = mp.erase(it); 
        } else {
            auto it3=mp3.find(it1->first);
           if(it3!=mp3.end()) mp3.erase(it3);
            a += it1->second;
            ++it; 
        }
    }
    int kd=0;
    cout<<a<<'\n';
    for(auto it4=mp3.begin();it4!=mp3.end();it4++){if(it4->second>1)kd+=it4->second;}
    cout << n - a-kd << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}