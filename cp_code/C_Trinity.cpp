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
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int min1=v[0];
int max1=v[0];

for(int i=0;i<n;i++){

    if(v[i]<min1)min1=v[i];
    if(v[i]>max1)max1=v[i];
}
int y=ceil(max1*1.0/2);
int count=0;int count2=0;
for(int i=0;i<n;i++){
if(v[i]<y){
    count++;
}
if(v[i]>2*min1)count2++;
}

cout<<min(count,count2)<<endl;


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