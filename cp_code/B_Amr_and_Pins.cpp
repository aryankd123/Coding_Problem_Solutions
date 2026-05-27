#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
double r,x,y,x1,y1;
cin>>r>>x>>y>>x1>>y1;
double d=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
cout<<ceil(d/(2*r));

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}