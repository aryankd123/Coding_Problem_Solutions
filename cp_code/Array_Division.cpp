#include <bits/stdc++.h>
using namespace std;
#define int long long 

bool is(vector<int>v,int mid,int k){

    int fl=1;
    int r_sum=0;

    for(int i=0;i<v.size();i++){
        if(v[i]>mid)return 0;
        r_sum+=v[i];
        if(r_sum>mid){
            r_sum=v[i];
            fl++;
        }
    }
    
    return fl<=k; 


}
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    vector<int>prefix;
    prefix.push_back(0);
    int tot=0;

    for(int i=0;i<n;i++){
        tot+=v[i];
        prefix.push_back(prefix[i]+v[i]);
    }
    int l=0;
    int r=tot+10;
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(is(v,mid,k)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;

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