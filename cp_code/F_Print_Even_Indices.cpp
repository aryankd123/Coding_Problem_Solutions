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
reverse(v.begin(),v.end());
if(n%2==0){
for(int i=0;i<n;i++){
    if(i%2!=0)cout<<v[i]<<" ";
}}
else{
for(int i=0;i<n;i++){
    if(i%2==0)cout<<v[i]<<" ";
}
}


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}