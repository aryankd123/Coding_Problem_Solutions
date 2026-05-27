#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
vector<int> v;
int count0=0;
int count1=0;
int sum=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
sum+=x;
if(x==0)count0++;
if(x==1)count1++;
v.push_back(x);
}
if(sum==0){cout<<0<<'\n';return;}
if(count0!=0&&count1!=0){cout<<count1*(1LL<<count0)<<'\n';return;}
if(count0!=0 && count1==0){cout<<0<<'\n';return;}
if(count0==0 && count1!=0){cout<<count1<<'\n';return;}
if(count0==0 && count1==0){cout<<0<<'\n';return;}



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