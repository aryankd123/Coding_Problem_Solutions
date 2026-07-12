#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        v.push_back(x);

    }
    sort(v.begin(),v.end());
    int prefix=0;
    
    for(int i=0;i<n;i++){
        if(v[i]>prefix+1){
            cout<<prefix+1;return ;
        }
        prefix+=v[i];

    }
    cout<<prefix+1;

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