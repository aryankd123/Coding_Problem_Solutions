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
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int max=0;
int flag=0;
for(int i=0;i<n;i++){
if(v[i]>max)max=v[i];
flag=i;
}
//int flag2=0;
int min=v[flag];
for(int j=flag+1;j<n;j++){
if(v[j]<min)min=v[j];

}
cout<<max-min<<endl;

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