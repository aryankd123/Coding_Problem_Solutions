#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M=1e9+7;
void solve() {
    
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    vector<int>prev(k+1,0);
    vector<int>prefix(k+1,0);

    prev[k]=1;
    for(int i=1;i<=n;i++){
        prefix[0]=prev[0];
        for(int j=1;j<=k;j++){
        
            prefix[j]=(prev[j]%M+prefix[j-1]%M)%M;
        }
        vector<int>curr(k+1,0);

        curr[0]=prefix[v[i-1]];
        for(int j=1;j<=k;j++){
            curr[j]=(((prefix[min(j+v[i-1],k)]-prefix[j-1])%M)+M)%M;
        }
        prev=curr;
    }
    cout<<prev[0];
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