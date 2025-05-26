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
int flag=1;
pair <int,int> p;
int count=0;
while(n>0){
if(n%10!=1 && n%10!=4) { flag=0;break;}
if(n%10==1)count=0;
if(n%10==4)count++;
if(count>2){flag=0;break;}


n=n/10;
}
if(count>0)flag=0;
if(flag==0)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int t;
// cin>>t;
// while (t--){
solve();
// }
    return 0;
}