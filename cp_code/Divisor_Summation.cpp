#include <bits/stdc++.h>
using namespace std;
#define int long long
// const int lowest = -1e6 ;
// const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
int sum=1;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        if(n/i==i)sum+=i;
        else {sum+=(i+(n/i));}
    }
}
if(n==1)cout<<0<<'\n';
else cout<<sum<<'\n';


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