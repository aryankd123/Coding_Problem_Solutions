#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

string s;
cin>>s;
map <char,int >mp;
for(int i=0;i<s.length();i++){

    mp[s[i]]++;
}
for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<" : "<<it->second<<endl;
}
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

solve();

    return 0;
}