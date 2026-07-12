#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int modd =1e9+7;

long long modExp(long long base, long long exp, long long mod) {
    long long res = 1;
    
    // Update base if it is greater than or equal to mod
    base = base % mod; 

    while (exp > 0) {
        // If exp is odd, multiply base with result
        if (exp & 1) {
            res = (res * base) % mod;
        }
        
        // exp must be even now, square the base
        base = (base * base) % mod;
        
        // Shift right by 1 to divide exp by 2
        exp >>= 1; 
    }
    return res;
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int m=s.size();
    int ans=(((n-m+1)%modd)*(modExp(26,(n-m),modd))%modd)%modd;
    cout<<ans;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  
        solve();
    
    
    return 0;
}