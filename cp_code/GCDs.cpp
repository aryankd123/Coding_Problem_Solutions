#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int count=0;
set<int>st;
for(int i=0;i<n;i++){
    int ans=v[i];
for(int j=i;j<n;j++){
    ans=__gcd(ans,v[j]);
    st.insert(ans);
}

}
cout<<st.size();


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}