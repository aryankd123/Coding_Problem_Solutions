#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int i, j, k, n, m, t;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> t;  
    while (t--) {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;  

        
        set<pair<int, int>> s;
        s.insert({a, b});           
        s.insert({a, -b});         
        s.insert({-a, b});         
        s.insert({-a, -b});         
  
        s.insert({b, a});
        s.insert({b, -a});
        s.insert({-b, a});
        s.insert({-b, -a});

       
        map<pair<int, int>, int> mp1, mp2;

        
        for (auto [i, j] : s) {
            mp1[{i + c, j + d}] = 1; 
            mp2[{i + e, j + f}] = 1;
        }

        k = 0;
        
        for (auto [p, w] : mp1) {
            if (mp2.count(p))
                k++;
        }

        cout << k << '\n'; 
    }
}