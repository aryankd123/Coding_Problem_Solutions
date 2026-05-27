#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
if(x1>y1 && y2>x2){cout<<"NO"<<'\n';return;}
if(x1<y1 && x2>y2){cout<<"NO"<<'\n';return;}
cout<<"YES"<<'\n';return;

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