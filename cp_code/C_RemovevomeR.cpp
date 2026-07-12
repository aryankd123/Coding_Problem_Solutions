#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int blocks = 1;
    for(int i = 1; i < n; i++) {
        if(s[i] != s[i-1]) {
            blocks++;
        }
    }
    
 if(blocks==2){cout<<"2\n";return ;}

 cout<<"1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}