#include <bits/stdc++.h>
using namespace std;
#define int long long
int factorial(int b){
if(b==1 || b==0)return 1;

 return b*factorial(b-1);

 
}
int comb2(int a){
    if(a==2)return 1;

    if(a>=2)return (a*(a-1))/2;
    else return 0;
}

void solve(){
int n,k;
cin>>n>>k;
int fmax=comb2(n-k+1);
int fmin=(comb2(n/k))*(k-(n%k))+(comb2(n/k+1))*(n%k);
cout<<fmin<<" "<<fmax;
//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
// int ans=comb2(5);
// cout<<ans;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}