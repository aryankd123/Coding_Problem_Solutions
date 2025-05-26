#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){

int a,b;
cin>>a;
//cout<<'\n';
cin>>b;
int ans=-1;
for(int i=a;i<=b;i++){
    for(int j=i;j<=b;j++){
        if((i^j)>=ans)ans=(i^j);    //note-we need to put brackets for every bitwise operation 
    }
}
cout<<ans;


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}