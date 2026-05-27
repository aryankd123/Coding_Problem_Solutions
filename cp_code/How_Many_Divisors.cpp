#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int a,b,c;
cin>>a>>b>>c;
int count=0;
for(int i=a;i<=b;i++){
if(c%i==0)count++;

}

cout<<count<<'\n';


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
solve();

    return 0;
}