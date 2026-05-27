#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
vector<int> v;
set<int> st;
for(int i=0;i<n;i++){
int x;
cin>>x;
st.insert(x);
v.push_back(x);
}
int count=0;
for(int i=0;i<n;i++){
    if(st.find(v[i]+1)!=st.end())count++;
}
cout<<count;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}