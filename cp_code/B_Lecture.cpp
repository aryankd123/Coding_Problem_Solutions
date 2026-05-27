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
int n,m;
cin>>n>>m;
map<string,string>m1;
for(int i=0;i<m;i++){
    string s,s1;
    cin>>s>>s1;
    if(s.length()<=s1.length()) m1[s]=s;
    else m1[s]=s1;
}
vector<string> v1;
for(int i=0;i<n;i++){
    string s11;
    cin>>s11;
    v1.push_back(s11);
}
for(int i=0;i<n;i++)cout<< m1.find(v1[i])->second<<" ";


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