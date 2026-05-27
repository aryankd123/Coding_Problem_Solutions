#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<cmath>
using namespace std;
typedef long long ll;
typedef long long int lli;
void solve(){
    
lli n,k,x;
cin>>n>>k>>x;
lli start=(k*(k+1))/2;
lli end= (n*(n+1))/2 -(((n-k)*(n-k+1))/2);

if((x<start && x<end) || (x>start)&& (x>end)    ) cout<<"NO"<<endl;
else cout<<"YES"<<endl;



} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}