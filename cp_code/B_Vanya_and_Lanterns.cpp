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
#include <iomanip>
using namespace std;
typedef long long int lli;
void solve(){
int n,k;
cin>>n>>k;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
double max1=0.0000000000;
for(int i=0;i<n-1;i++){
if((abs(v[i]-v[i+1])/2.0)>max1)max1=(abs(v[i]-v[i+1])/2.0);
}
if(abs(v[0]-0)>max1)max1=abs(v[0]-0);
if(abs(v[n-1]-k)>max1)max1=abs(v[n-1]-k);

cout<<setprecision(10)<<max1<<endl;

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