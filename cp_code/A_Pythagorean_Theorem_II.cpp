#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <cmath>
#include <unordered_map>
using namespace std;
typedef long long int lli;
void solve(){
int n;
cin>>n;
int count=0;
int flag=1;
vector <int> v,v1;
for(int i=1;i<=10000;i++){
    v.push_back(i);
    v1.push_back(0);
}


for(int i=n-1;i>=1;i--){
for(int j=i;j>=1;j--){
    if((j*j+i*i)==(n*n))count++;break;
    if(j*j+i*i<n*n) break;
    if(j==i && (j*j+i*i<n*n))flag=0;break;
}
if(count>0)break;
if(flag==0)break;
}




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