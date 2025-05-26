#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
using namespace std;
typedef long long int lli;
void solve(){

map<int,string> m;
m[1]="abc";  //O(logn). where n is the size of our map
m[6]="bcd";
m[3]="xyz";
m.insert({12,"fgd"});
//cout<<m[12];
for(auto it=m.begin();it!=m.end();++it){cout<<(*it).first<<" "<<(*it).second<<endl;}

// for(auto &pr:m){
//     cout<<pr.first<<" "<<pr.second<<endl;
// }
auto it2=m.find(1);  //O(log n)
cout <<(*it2).second;
m.clear();
m[6]="baba";
cout<<endl;
cout<<m[6];
m.erase(6); //we can give key or iterator  //O(logn) 
m.erase(it2);
cout<<endl;
cout<<(*it2).second;

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