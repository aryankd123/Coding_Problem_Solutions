#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s="HelloWorld";
    int n;
    cin>>n;
    string cpy="";
    for(int i=0;i<10;i++){
        if(n-1!=i)cpy.push_back(s[i]);
    }
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