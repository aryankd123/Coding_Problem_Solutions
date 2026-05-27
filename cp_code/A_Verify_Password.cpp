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
int s_size=s.size();
for(int i=0;i<n;i++){
    if(i>=1 &&(48<=s[i] && s[i]<=57 && s[i-1]>=97) ) {cout<<"NO"<<'\n';return;}
    
}
for(int i=0;i<n-1;i++){
   if( s[i+1]<s[i]){ cout<<"NO"<<'\n';return;}
}
cout<<"YES"<<'\n';return;
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