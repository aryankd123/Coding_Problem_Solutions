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

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
int n,k;
cin>>n>>k;
multiset <lli> s1;
for(int i=0;i<n;i++){
    lli x;
    cin>>x;
    s1.insert(x);
} 
lli sum=0;

for(int i=0;i<k;i++){
auto it=--s1.end();
sum+=(*it);
s1.insert((*it)/2);
s1.erase(it);
}
cout<<sum<<endl;




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