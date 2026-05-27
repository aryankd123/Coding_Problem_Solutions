#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
vector<pair<int,int>>v;
for(int i=1;i*i<=n;i++){
if(n%i==0)v.push_back({i,n/i});
}
reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    if(__gcd(v[i].first,v[i].second)==1){cout<<v[i].first<<" "<<v[i].second<<'\n';return;}
}

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}