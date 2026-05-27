#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
string s;
cin>>s;
int c_d=0;
int c_k=0;
map<pair<int,int>,int> mp;
for(int i=0;i<n;i++){
if(s[i]=='D')c_d++;
else c_k++;
int gcd_i=gcd(c_d,c_k);
mp[{c_d/gcd_i,c_k/gcd_i}]++;
cout<<mp[{c_d/gcd_i,c_k/gcd_i}]<<" ";
}
cout<<'\n';
//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}