#include <bits/stdc++.h>
using namespace std;

#define int long long
const int lowest = -1e6;
const int highest = 1e6;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    vector<int> id1(n, 0);
    vector<int> id2(n, 0);
    vector<int> id3(n, 0);
    
    for (int i = 0; i < n; i++) {
        if (v[i] == 1) id1[i]++;
        else if (v[i] == 2) id2[i]++;
        else id3[i]++;
        
        if (i != 0) {
            id1[i] += id1[i - 1];
            id2[i] += id2[i - 1];
            id3[i] += id3[i - 1];
        }
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        if (a == 1) {
            cout << id1[b - 1] << " " << id2[b - 1] << " " << id3[b - 1] << '\n';
        } else {
            cout << id1[b - 1] - id1[a - 2] << " " << id2[b - 1] - id2[a - 2] << " " << id3[b - 1] - id3[a - 2] << '\n';
        }
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("bcount.in", "r", stdin);  
    freopen("bcount.out", "w", stdout); 

    solve();

    return 0;
}