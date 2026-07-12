#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<set<int>>v(n+1);
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int a;
            cin>>a;
            v[a].insert(i);
        }
    }
    for(int i=1;i<=n;i++){
        // cout<<i<<" ";
        int x=v[i].size();
        cout<<x<<" ";
        for(auto val:v[i]){
            cout<<val<<" ";
        }
        cout<<"\n";

    }
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