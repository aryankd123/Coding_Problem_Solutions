#include <bits/stdc++.h>
using namespace std;
#define int long long 
typedef pair<int,int> pi;

void solve() {
    int n,k,m;
    cin>>n>>k>>m;
    map<int,set<pi>> mp;
    vector<pi>vp;

    vector<int>c;
    vector<int>v;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        c.push_back(x);
        v.push_back(y);
        mp[x].insert({y,i});
        vp.push_back({y,i});
    }
    sort (vp.begin(),vp.end());
    reverse(vp.begin(),vp.end());


    vector<pi>flag;
  for (auto const& [key, val] : mp) {
    flag.push_back(*val.rbegin()); 
}


sort(flag.begin(),flag.end());
reverse(flag.begin(),flag.end());



set<int> index;

int ans=0;

for(int i=0;i<m;i++){
auto val=flag[i];
ans+=val.first;
index.insert(val.second);
}

int cnt=0;

int i=0;

while(cnt<k-m){
int idx=vp[i].second;
int value=vp[i].first;
if(index.find(idx)==index.end()){
ans+=value;
cnt++;
}

i++;
}



    cout<<ans;





}









signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}