#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    int flag =v[0];
     if(v[0]==1){cout<<1;return ;}
    // int baba=flag;
    for(int i=0;i<n;i++){
        --flag;
        
        if(flag==0){cout<<i;return ;}
        flag=max(flag,v[i]);

    }
    cout<<n;
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