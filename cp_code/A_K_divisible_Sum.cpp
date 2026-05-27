#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;

void solve(){
int a,b;
cin>>a>>b;
if(a<=b){
    double ans=ceil(double(b)/double(a));
    cout<<ans<<'\n';return;
}
else{
  
    b+=((a)+b-(a%b));
    double ans=ceil((b)/a);
    cout<<ans<<'\n';return;
}


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