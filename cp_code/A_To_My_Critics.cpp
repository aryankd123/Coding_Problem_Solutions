#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int a,b,c;
cin>>a>>b>>c;
if(a+b>=10 || b+c>=10||a+c>=10)cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';

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