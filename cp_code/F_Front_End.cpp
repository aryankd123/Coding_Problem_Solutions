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
for(int i=0;i<n/2;i++){
    cout<<v[i]<<" "<<v[n-i-1]<<" "; 
}
if(n%2!=0)cout<<v[ceil(n/2)];


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}