#include <bits/stdc++.h>
using namespace std;

#define int long long

bool compare(pair<tuple<int, int, int>, string>& a, pair<tuple<int, int, int>, string>& b) {
    if (get<0>(a.first) != get<0>(b.first)) return get<0>(a.first) > get<0>(b.first); 
    if (get<1>(a.first) != get<1>(b.first)) return get<1>(a.first) > get<1>(b.first); 
    return get<2>(a.first) > get<2>(b.first); 
}

void solve() {
    int n;
    cin >> n;
    
    vector<pair<tuple<int, int, int>, string>> countries;
    
    for (int i = 0; i < n; ++i) {
        int g, s, b;
        string name;
        cin >> g >> s >> b;
        cin.ignore(); 
        getline(cin, name); 
        
        countries.push_back({make_tuple(g, s, b), name});
    }
    
    sort(countries.begin(), countries.end(), compare);
    
    cout << countries[0].second << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();
    
    return 0;
}