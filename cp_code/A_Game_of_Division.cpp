#include <bits/stdc++.h>
using namespace std;
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,k;
cin>>n>>k;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
for(int i=0;i<n;i++){
int flag=0;
for(int l=0;l<n;l++){
if(l!=i){if((abs(v[l]-v[i]))%k==0){flag++;}}
}
if(flag==0){cout<<"YES"<<'\n'<<i+1<<'\n';return;}
}
cout<<"NO"<<'\n';

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