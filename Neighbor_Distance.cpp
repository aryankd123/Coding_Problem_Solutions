#include <bits/stdc++.h>
using namespace std;

// Helper function to find the nearest neighbor distance of a value in the set
long long get_nn(const set<int>& st, int val) {
    auto it = st.find(val);
    long long res = 2e18; // Use a massive number for "infinity"
    
    // Check distance to the left neighbor
    if (it != st.begin()) {
        res = min(res, (long long)(*it - *prev(it)));
    }
    // Check distance to the right neighbor
    if (next(it) != st.end()) {
        res = min(res, (long long)(*next(it) - *it));
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    set<int> st;
    st.insert(0);
    st.insert(v[0]);
    
    long long ans = 2LL * v[0];
    cout << ans << "\n";
    
    for(int i = 1; i < n; i++) {
        int x = v[i];
        
        // If x is already in the set, its distance is 0. 
        if (st.count(x)) {
            cout << ans << "\n";
            continue;
        }
        
        // Find left and right neighbors BEFORE inserting x
        auto it = st.lower_bound(x);
        int L = -1, R = -1;
        
        if (it != st.end()) {
            R = *it;
        }
        if (it != st.begin()) {
            L = *prev(it);
        }
        
        // 1. Subtract the OLD contributions of L and R
        if (L != -1) ans -= get_nn(st, L);
        if (R != -1) ans -= get_nn(st, R);
        
        // 2. Insert the new element
        st.insert(x);
        
        // 3. Add the NEW contributions of L, R, and x
        if (L != -1) ans += get_nn(st, L);
        if (R != -1) ans += get_nn(st, R);
        ans += get_nn(st, x);
        
        cout << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}