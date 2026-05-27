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

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
int n,pos;
cin>>n>>pos;
vector<pair<int,int>> v;

for(int i=0;i<n;i++){
int x,y;
cin>>x;
cin>>y;
if(x>=y){
swap(x,y);
}

v.push_back(make_pair(x,y));


}
sort(v.begin(),v.end());
int sum=0;
for(int i=0;i<n;i++){
    if(pos>=v[i].first && pos<=v[i].second)sum+=0;
    else if(pos<=v[i].first){
        pos=v[i].first;
        sum+=v[i].first-pos;
    }
    else if(pos>=v[i].second){
        pos=v[i].second;
        sum+=pos-v[i].second;
    }
}
cout<<sum;


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