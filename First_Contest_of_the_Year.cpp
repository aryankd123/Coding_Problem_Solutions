#include <bits/stdc++.h>
using namespace std;

void solve() {
    int d,f;
    cin>>d>>f;
    int start =f;
    while(start<d){
        start+=7;
    }
    cout<<start -d;
    
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