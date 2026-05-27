#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int a,b,c;
cin>>a>>b>>c;
if(b%3==1&&c<2){cout<<-1<<'\n';return;}
if(b%3==2&&c<1){cout<<-1<<'\n';return;}
if((b+c)%3>0){cout<<a+(b+c)/3+1<<'\n';return;}
cout<<a+(b+c)/3<<'\n';

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