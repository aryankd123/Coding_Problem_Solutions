#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;
 

int bin_exp_iter(int a,int b){a=a%M;int ans=1;while(b){if(b&1) ans=(ans*a)%M;
a=(a*a)%M;b=(b>>1);}return ans;}
 
 
 

signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
int t;
cin>>t;
while (t--){
int a;
cin>>a;
int rem=a%3;
int val=a/3;
if(a<=4){cout<<a<<'\n';continue;}
cout<<bin_exp_iter(3,val)*rem<<"\n";
}
    return 0;
}