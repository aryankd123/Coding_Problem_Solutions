#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    char x;
    cin>>x;

    vector<int>v(5);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<5;j++){
            if(s[j]=='x')v[j]++;
        }
    }
if(v[x-'A']==n)cout<<"No";
else cout<<"Yes";
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