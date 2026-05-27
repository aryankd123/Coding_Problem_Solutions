#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    int n;

    cin>>s;
    cin>>n;
    string cpy="";
    for(int i=n;i<s.size()-n;i++)cpy.push_back(s[i]);
    cout<<cpy;

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