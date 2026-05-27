#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a')a++;
        else b++;
    }
    cout<<a<<" "<<b<<"\n";
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