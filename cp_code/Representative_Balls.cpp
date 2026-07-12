#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    for(int i=1;i<=m;i++){
        mp[i]=-1;
    }
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        mp[x]=max(mp[x],y);
        
    }
    for(auto [key,val]:mp){
        cout<<val<<" ";
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