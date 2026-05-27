#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
#include <unordered_map>
using namespace std;
typedef long long int lli;
void solve(){
int n;
cin>>n;
int ans=0;
int i=1;
while((-n<=ans)&& (ans<=n)) {
   
    if(i%2!=0) ans=ans-(2*i-1);
    else ans=ans+(2*i-1);
    i++;
}
if(i%2==0)cout<<"Sakurako"<<endl;
else cout<<"Kosuke"<<endl;



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