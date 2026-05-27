#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,m,q;
cin>>n>>m>>q;

vector<int> v;
for(int i=0;i<m;i++){
int x;
cin>>x;
v.push_back(x);
}
sort (v.begin(),v.end());
for(int j=0;j<q;j++){
    int x;
    cin>>x;
    auto it= upper_bound(v.begin(),v.end(),x);
    if(it==v.begin()){cout<<v[0]-1<<'\n';continue;}
    if(it==v.end()){cout<<n-v[m-1]<<'\n';continue;}
    auto it2=it;
    it2=--it2;
    cout<<min(abs(*it-(*it+*it2)/2),abs(*it2-(*it2+*it)/2))<<'\n';
}



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