#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,m,k;
cin>>n>>m>>k;
string ans(m, '0'); 
string ans1(m,'1');

vector<int> missing;
for(int i=0;i<m;i++){
    int x;
    cin>>x;
    missing.push_back(x);
}
set<int>st;
for(int i=0;i<k;i++){
    int x;
    cin>>x;
    st.insert(x);
}
if(n-k>=2){cout<<ans<<'\n';return;}
if(n-k==0){cout<<ans1<<'\n';return;}
for(int i=0;i<m;i++){
    if(st.find(missing[i])==st.end())ans[i]='1';
}
cout<<ans<<'\n';
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