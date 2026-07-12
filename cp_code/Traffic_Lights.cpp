#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,n;
    cin>>x>>n;
    multiset<int> ms;
    ms.insert(x);
    set<int>st;
    st.insert(0);
    st.insert(x);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        auto it = st.lower_bound(k);
        auto it2=it;
        it2--;
        int r=*it;
        int l=*it2;
        int dis=r-l;
        int fl1=k-l;
        int fr1=r-k;
        st.insert(k);
        ms.insert(fl1);
        ms.insert(fr1);
        auto itt=ms.find(dis);
        ms.erase(itt);
        cout<<*ms.rbegin()<<" ";
        
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