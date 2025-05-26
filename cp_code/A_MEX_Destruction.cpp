#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
int flag2=0;
int count=0;
vector<int> v;
int flag=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
if(x==0)flag++;

v.push_back(x);

}
if(flag==n){cout<<0<<'\n';return;}

for(int i=0;i<n;i++){
   if(i!=0) {if(flag2>0 && v[i]!=0 && v[i-1]==0){cout<<2<<'\n';return;}}
    if(v[i]!=0)flag2++;
    if(flag2>0 && v[i]==0)continue;
}

cout<<1<<'\n';
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