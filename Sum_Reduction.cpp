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

    vector<int>bits(32,0);
    for(int i=0;i<n;i++){
        for(int k=0;k<32;k++){
            if(((1<<k)&v[i])!=0)bits[k]++;
        }
    }
    for(int i=0;i<32;i++){
        if(bits[i]>1){cout<<"No\n";return ;}
    }
    cout<<"Yes\n";
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