#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int p,n;
cin>>p>>n;

vector<int> v(p,-1);
for(int i=0;i<n;i++){
int x;
cin>>x;
if(v[x%p]==-1){v[x%p]++;}
else if(v[x%p]!=-1){cout<<i+1;return;}
}

cout<<-1<<'\n';
// //cout<<4%0;
// cout<<0%0;
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


solve();

    return 0;
}