#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1), b(n+1);
    
    for(int i=1;i<=n;i++){
        cin>>a[i];

    }
     for(int i=1;i<=n;i++){
        cin>>b[i];
        
    }

bool is =1; 
int p_odd =0, p_even = 0;
int prev_c = 0;

    for (int i = 1; i <= n + 1; i++) {
        int curr_c =(i <= n) ? (b[i] - a[i]) : 0;
        
        int E_i =curr_c +prev_c;

        if (i % 2 != 0) {
            p_odd +=E_i;
            if (p_odd <0) is =0;
    } else {
            p_even += E_i;
            if (p_even<0) is=0;
        }
        
    prev_c =curr_c;
    }

    if (is) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
}

signed main() {
    // Fast I/O is crucial for 2*10^5 sum of N
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}