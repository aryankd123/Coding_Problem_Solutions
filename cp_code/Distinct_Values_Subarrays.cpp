#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    set<int> st;
    vector<int>v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        v.push_back(x);
    }
    int ans=0;
    int l=0;

    for(int r=0;r<n;r++){
        if(st.find(v[r])!=st.end()){
            while(v[l]!=v[r]){
                st.erase(v[l]);
                l++;
            }
            st.erase(v[l]);
            l++;
        }
         st.insert(v[r]);
       
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