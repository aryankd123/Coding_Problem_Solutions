#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    map<int,vector<int>>mp;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x].push_back(i);

    }
    int flag=-1;
    for(auto val:mp){
        if(val.second.size()>=2){
            int s=val.second.size();
            int start=val.second[0];
            int end=val.second[s-1];
            flag=max(flag,end-start);
        }
    }
    if(flag<0){cout<<"-1\n";return ;}
    cout<<n-1-flag<<"\n";
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