#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
using namespace std;
typedef long long int lli;
void solve(){
// vector<int> v ={12,45,67};
// vector<int> :: iterator it =v.begin();
// //cout<<*(it)+1;
// for(it=v.begin();it!=v.end();it++)cout<<*it<<" ";

 vector<pair<int,int>> v1 ={{12,45},{67,89}};

//vector<pair<int,int>> :: iterator it1=v1.begin();
cout<<(* it1).first<<" ";
cout<<it1->second;




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