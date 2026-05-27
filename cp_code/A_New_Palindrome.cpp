#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
string s;
cin>>s;
map<char,int>mp;
for(int i=0;i<s.length();i++){
    mp[s[i]]++;
}
auto it1=mp.begin();
if((s.length()%2==0&&mp.size()>=2)|| (s.length()%2!=0 && mp.size()>=3))cout<<"YES"<<'\n';
else if(s.length()%2!=0 && mp.size()==2 && (it1->second>1)&&((++it1)->second>1)) {cout<<"YES"<<'\n';}
else cout<<"NO"<<'\n';

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