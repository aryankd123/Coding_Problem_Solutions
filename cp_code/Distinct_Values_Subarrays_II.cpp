#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve() {
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    int l=0;
    vector<int>v;

    int ans=0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }


    for(int r=0;r<n;r++){
        int x=v[r];
        mp[x]++;
        while(mp.size()>k){
            mp[v[l]]--;
            if(mp[v[l]]==0)mp.erase(v[l]);
            l++;

        }
     
        ans+=(r-l+1);

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