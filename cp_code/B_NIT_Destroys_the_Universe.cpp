#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
v.push_back(v[v.size()-1]);
int count=0;
int flag=0;
for(int i=0;i<n;i++){
    if(v[i]!=0  && flag==0){count++;flag++;}
    else if(v[i]==0) {flag=0;}
}
if(count>2)cout<<2<<'\n';
else cout<<count<<'\n';


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