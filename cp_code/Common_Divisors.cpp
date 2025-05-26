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
int ans=v[0];
for(int i=0;i<n;i++){ans=__gcd(ans,v[i]);}
int count=0;
for(int i=1;i*i<=ans;i++){
if(ans%i==0){
    if(ans/i==i){count++;}
    else count+=2;
}
}
cout<<count;


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}