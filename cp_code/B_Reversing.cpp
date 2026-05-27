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
if(x==0)reverse(v.begin(),v.end());
v.push_back(x);
}

for(int i=0;i<n;i++){cout<<v[i]<<" ";}


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}