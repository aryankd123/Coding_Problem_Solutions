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
vector <int> v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);}

sort(v.begin(),v.end());

for(int i=n-1;i>=0;i--){
cout<<v[i]<<" ";
   }
cout<<endl;


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