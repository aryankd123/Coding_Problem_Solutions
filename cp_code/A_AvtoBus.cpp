#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
int min=0;
int max=0;
if(n%2!=0 || n<4){cout<<-1<<'\n';return;}
if(n==4 || n==6){cout<<1<<' '<<1<<'\n';return;}

if(n%4==0)max=n/4;
else if(n%4==2)max=(n-6)/4+1;

if(n%6==0)min=n/6;
else if(n%6==2)min=(n-8)/6 +2;
else if(n%6==4)min=(n-4)/6 +1;
cout<<min<<" "<<max<<'\n';

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