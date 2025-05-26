#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =10000007;
 
 

 
 
//***binary_multiplication***
int bin_multiply(int a,int b){int ans=0;while(b){if(b&1)ans=(ans+a)%M;a=(a+a)%M; b=b>>1;} return ans;}
 
//***modular/bin_exponentiation***
//****recursive_code***
//int bin_exp_rec(int a,int b){a=a%M;if(b==0)return 1;long long   res=bin_exp_rec(a,b/2);    //to reduce the no of function calls we are precalculating the res otherwise putting it in return would increase the time complexity very much 
//if (b&1)return (a* (res * res)%M)%M;else return (res*res)%M;}
//****iterative_code***
int bin_exp_iter(int a,int b){a=a%M;int ans=1;while(b){if(b&1) ans=(bin_multiply(ans,a));
a=bin_multiply(a,a);b=(b>>1);}return ans;}
 
 
 

signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

while(1){
    int n,k;
    cin>>n>>k;
    if(n==0 &&k==0)break;

cout<<(bin_exp_iter(n,k)+bin_exp_iter(n,n)+(2*(bin_exp_iter(n-1,k)+bin_exp_iter(n-1,n-1)))%M)%M<<'\n';
}
    return 0;
}