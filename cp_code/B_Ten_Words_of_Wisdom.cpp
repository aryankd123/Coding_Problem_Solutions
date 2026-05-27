#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int maxi=INT_MIN;
int n;
cin>>n;
int ans=-1;
for(int i=1;i<=n;i++){
int a,b;
cin>>a>>b;
if(a<=10){
    if(b>maxi){maxi=b;ans=i;}
}
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