#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
double l,r,x,y,k;
cin>>l>>r>>x>>y>>k;
double a=l;
double b=x;
if(r/x<k){cout<<"NO"<<'\n';return;}
if(l/y>k){cout<<"NO"<<'\n';return;}
for(double a=l;a<=r;a++){
while(a/b>k)b++;
if(a/b==k){cout<<"YES"<<'\n';return;}
}
cout<<"NO"<<'\n';




} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}