#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;

vector<int> v,v1;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
for(int i=0;i<n+1;i++){
int x;
cin>>x;
v1.push_back(x);
}
int res=0;
int diff=INT_MAX;
for(int i=0;i<n;i++){
    diff=min({diff,abs(v[i]-v1[n]),abs(v1[i]-v1[n])});
    if(v[i]<=v1[n]&& v1[n]<=v1[i])diff=0;
    if(v[i]>=v1[n]&& v1[n]>=v1[i])diff=0;
    res+=abs(v[i]-v1[i]);
}
res+=(diff+1);
cout<<res<<'\n';


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