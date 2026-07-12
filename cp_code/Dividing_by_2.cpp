#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    map<int,int>mp;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    while((*mp.begin()).first!=(*prev(mp.end())).first){
        cnt+=(*prev(mp.end())).second;
        int flag=(*prev(mp.end())).second;
    auto last= (*prev(mp.end())).first;

    auto start= (*mp.begin()).first;
    mp.erase(prev(mp.end()));
        mp[last/2]+=flag;
    }
    cout<<cnt<<"\n";
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