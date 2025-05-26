#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;


void solve(){
int a,b;
cin>>a>>b;
int ct=0;
if(b==1){b++;ct++;}
int b1=b+1;
int cpya=a;
int cpy_ct=ct;
do{
   while(cpya>0){cpya/=b1;cpy_ct++;}
   cpya=a;
    
}
while(cpy_ct<ct){cpya/=b1;cpy_ct++;}
while(a>0){
    a=a/b;
    ct++;
}
cout<<ct<<'\n';


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}