#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int a,b;
cin>>a>>b;
if(b<2*a){cout<<-1<<" "<<-1<<'\n';return;}
cout<<a<<" "<<2*a<<'\n';
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