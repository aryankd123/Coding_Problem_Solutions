#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        mp[x]++;
    }
    int ans=0;
for(auto val:mp){
ans=max(ans,val.second);
}
cout<<n-ans+1<<"\n";
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