#include <bits/stdc++.h>
using namespace std;
#define int long long
// const int lowest = -1e6 ;
// const int highest= 1e6 ;
void solve(){
int x,y;
cin>>x>>y;
if(y%x==0)cout<<y*y/x<<'\n';
else cout<<x*y/(gcd(x,y))<<'\n';
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