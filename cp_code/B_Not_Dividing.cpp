#include <bits/stdc++.h>
using namespace std;
#define int long long
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
for(int i=0;i<n-1;i++){
    if(v[i]==1 && i==0)v[i]++;
    if(v[i]==1 && i!=0 && v[i-1]==2)v[i]=v[i-1]+1;
    if(v[i]==1 && i!=0 && v[i-1]!=2)v[i]++;
    
 if(v[i+1]%v[i]==0)v[i+1]++;
}
for(int i=0;i<n;i++){
    cout<<v[i]<<' ';
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