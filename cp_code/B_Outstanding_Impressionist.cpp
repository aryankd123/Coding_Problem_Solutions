#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    const int MAXi = 400010;
    vector<int> count_v(MAXi, 0);
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> ran(n);
        for (auto &p : ran) {
            cin >> p.first >> p.second;
        }
       unordered_map<int, int> freq;
      for (auto &p : ran) {
            if (p.first == p.second) {
                freq[p.first]++;
            }
        }
        vector<int> unique;
        unique.reserve(freq.size());
        for (auto &[v, ct] : freq) {
            unique.push_back(v);
            count_v[v] += ct;
        }
        sort(unique.begin(), unique.end());

        string s = "";
        s.reserve(n);
        
        for (int i = 0; i < n; i++) {
            int li = ran[i].first;
            int ri = ran[i].second;
            
            if (li < ri) {
      
                int low = lower_bound(unique.begin(), unique.end(), li) - unique.begin();
                int upper = upper_bound(unique.begin(), unique.end(), ri) - unique.begin();
                int num = upper - low;
                int si = ri-li +1;
                
        if (num < si) {
                    s += '1';}
                     else {s += '0'; 
            }
     } else {
                int v = li;
                if (count_v[v] <= 1) {s += '1'; 
            } else {s += '0';
            }
        }
        }
        
        cout << s << "\n";
        
        for (auto &[v, ct] : freq) {
            count_v[v] -= ct;
        }
    }
    
    return 0;
}