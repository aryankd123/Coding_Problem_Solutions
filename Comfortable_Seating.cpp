#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v[0]!=v[1])cout<<"NO\n";

    else cout<<"YES\n";
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