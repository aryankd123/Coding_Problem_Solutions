#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
string s1;
string s2;
cin>>s1>>s2;
map<char,int>mp1,mp2;
for(int i=0;i<s1.length();i++){
    mp1[s1[i]]++;
}
for(int i=0;i<s2.length();i++){
    mp2[s2[i]]++;
}
int ans=0;
for(auto it2=mp2.begin();it2!=mp2.end();it2++ ){
    if(mp1.find(it2->first)==mp1.end()){cout<<-1;return;}
    else {
        auto it1=mp1.find(it2->first);
        if(it2->second>=it1->second)ans+=it1->second;
        else ans+=it2->second;
    }
}

if(ans>0)cout<<ans;
else cout<<-1;
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