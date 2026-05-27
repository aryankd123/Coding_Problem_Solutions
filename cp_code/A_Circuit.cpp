#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
#include <unordered_map>
#include<map>
#include<unordered_set>
#include <set>
using namespace std;
typedef long long int lli;
void solve(){
int n;
cin>>n;
vector<int> v;
int sum1=0;
int sum0=0;
for(int i=0;i<2*n;i++){
int x;
cin>>x;
v.push_back(x);
if(x==0)sum0++;
else sum1++;
}
if(sum0%2!=0)cout<<1<<" "<<min(sum1,sum0)<<endl;
else cout<<0<<" "<<min(sum1,sum0)<<endl;



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