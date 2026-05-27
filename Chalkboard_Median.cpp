#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,q;
    cin>>x>>q;
    multiset<int>st;
    st.insert(x);
    auto it=st.begin();
    for(int i=0;i<q;i++){
        int xx; int yy;
        cin>>xx>>yy;
        st.insert(xx);
        if (xx < *it) {
            it--; 
        }
        st.insert(yy);
        if (yy >= *it) {
            it++; }

        cout<<(*it)<<"\n";

    }
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