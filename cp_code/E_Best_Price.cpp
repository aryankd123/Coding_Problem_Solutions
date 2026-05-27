#include<bits/stdc++.h> 
using namespace std; 
#define int long long

void solve(){ 
    int n, k; 
    cin >> n >> k; 
    vector<int> a(n), b(n); 
    for (auto &x : a) {cin>>x;} 
    for (auto &x : b) {cin>>x;}


    sort(a.begin(), a.end()); 

    sort(b.begin(), b.end()); 


    vector<int> v; 

    v.reserve(2*n); 


    for (auto x :a) v.push_back(x); 
    for (auto x :b) v.push_back(x); 

    sort(v.begin(), v.end()); 

    v.erase(unique(v.begin(), v.end()), v.end()); 
    int max_earn = 0; 


    for (auto P_val : v) { 
        int l_a =lower_bound(a.begin(),a.end(), P_val)-a.begin(); 
        int l_b =lower_bound(b.begin(),b.end(), P_val)-b.begin(); 
        int D = l_a-l_b; 
        if (D <= k) { 
            int b = n-l_b; 
            int e = P_val*b; 
            if (e > max_earn) max_earn = e; 
        } 
    } 
    cout << max_earn << "\n"; 
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