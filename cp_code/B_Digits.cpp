#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
set<int> st;
int n,d;
cin>>n>>d;
st.insert(1);
if(d%3==0 || n>=3)st.insert(3);
if(d%9==0 || n>=6 ||(d%3==0 && n>=3))st.insert(9);
if(d==5)st.insert(5);
if(d==7 || n>=3)st.insert(7);

for(auto it=st.begin();it!=st.end();it++){
cout<<*it<<" ";
}
cout<<'\n';
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}