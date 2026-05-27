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
map<char,int>mp;
for(int i=0;i<n;i++){
mp[s[i]]++;
}
vector<char> v;
for(auto it=mp.begin();it!=mp.end();it++){
v.push_back(it->first);
}
reverse(v.begin(),v.end());
map<char,char>mp2;
int i=0;
for(auto it=mp.begin();it!=mp.end();it++){
mp2.insert({it->first,v[i]});i++;
}
for(int i=0;i<n;i++){
cout<<mp2[s[i]];
}
cout<<'\n';


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