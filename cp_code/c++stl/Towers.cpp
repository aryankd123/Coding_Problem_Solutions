#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;
 
 
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
multiset<int> st;

for (int i = 0; i < n; i++) {
    auto it = st.upper_bound(v[i]);
    if (it != st.end()) {
        st.erase(it);
        st.insert(v[i]);
    }
    else {
        st.insert(v[i]);
    }
}
cout<<st.size();

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
//factorial();
//inverses();

solve();

    return 0;
}