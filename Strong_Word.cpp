#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int n=s.size();
    if(s[0]==s[n-1])cout<<"Yes\n";
    else cout<<"No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}