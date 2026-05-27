#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
using namespace std;
typedef long long int lli;
void solve(){
vector <int> v={12,45,67};
cout<<*(v.begin())<<endl;
for( int value: v){
    value++;
    //cout<<value<<" ";
}
for( int &value: v){
     cout<<value<<" ";
     value++;
}
cout<<endl;
for( auto  value: v){
     cout<<value<<" ";
}
cout<<endl;
auto a=1.0;
cout<<a;



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