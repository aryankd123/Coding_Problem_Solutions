#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;

void solve(){
int n;
cin>>n;
if(n==0){cout<<1;return;}
if(n==1){cout<<8;return;}
n=n-2;
if(n%4==0){cout<<4;return;}
if(n%4==1){cout<<2;return;}
if(n%4==2){cout<<6;return;}
if(n%4==3){cout<<8;return;}


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}