#include <bits/stdc++.h>
using namespace std;
//#define int long long
void solve(){
int n;
cin>>n;
 
vector<int> v;
 
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
 
}
sort(v.begin(),v.end());
vector<int> hash;
int count=1;
for(int i=0;i<n;i++){
if(i+1<n&& v[i+1]==v[i])count++;
else {hash.push_back(count);count=1;}
}
 
// cout<<endl;
sort(hash.begin(),hash.end());
// for(int i=0;i<hash.size();i++){
//     cout<<hash[i]<<" ";
// }
int ans=0;
int flag=0;
map<int,int>mp;
for(int i=0;i<hash.size();i++){
    flag=i+1;
    if(hash[i]==0){i++;flag++;}
    if(flag<hash.size()){hash[flag]=hash[flag]-1;mp[flag]++;}
    if((i<hash.size())&& hash[i]>0){
        hash[i]=hash[i]-1;ans++;
        
        if(hash[i]==0 && mp.find(i)==mp.end()){ans++;}}
 
    
    
}
cout<<ans<<'\n';
 
 
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