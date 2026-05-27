#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
int gcd_by_me(int a,int b){
    if(b==0)return a;
    return gcd_by_me(b,a%b);
}
int lcm_by_me(int a,int b){
    return (abs(a*b)/gcd_by_me(a,b));
}
void solve(){
int a,b;
cin>>a>>b;
cout<<lcm_by_me(a,b)<<" "<<gcd_by_me(a,b)<<'\n';


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