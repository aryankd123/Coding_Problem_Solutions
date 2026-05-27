#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
    
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n-1;i++){
int x;
cin>>x;
v.push_back(x);
}
vector<int>ans;
ans.push_back(v[0]);

for(int i=0;i<n-2;i++){
    ans.push_back(v[i]|v[i+1]);
}
ans.push_back(v[n-2]);
for(int i=0;i<n-1;i++){
    if((ans[i]&ans[i+1])!=v[i]){cout<<-1<<'\n';return;}
}
for(int i=0;i<n;i++){
    cout<<ans[i]<<' ';
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