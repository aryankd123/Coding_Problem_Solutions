#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>r;
    vector<int>c;
    int ans=0;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        r.push_back(x);
        c.push_back(y);

    }

    set<int>rr;
    set<int>cc;
    for(int i=m-1;i>=0;i--){
        int x=r[i];
        int y=c[i];
        if(rr.find(x)==rr.end()&& cc.find(y)==cc.end() ){
           ans++;
            
        }
            rr.insert(x);
            cc.insert(y);

    }
    // cout<<rr.size();
    cout<<ans;
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