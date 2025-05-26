#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
vector<int> v,v1;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}

for(int i=0;i<n;i++){
int x;
cin>>x;
v1.push_back(x);
}
int sum=0;
for(int i=0;i<n-1;i++){
if(v[i]>v1[i+1])sum+=v[i]-v1[i+1];

} 
sum+=v[n-1];
cout<<sum<<'\n';
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