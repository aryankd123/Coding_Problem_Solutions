#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,m,q;
cin>>n>>m>>q;
int l,r,d;
cin>>l>>r>>d;
if((l<d && d<r )|| (r<d && d<l)){cout<<min(abs(l-(l+r)/2),abs(r-(l+r)/2))<<endl;return;}
if(d<l && d<r) {cout<<min(l,r)-1<<endl;return;}
if(d>l && d>r){cout<<n-max(l,r)<<endl;return;}

} 
signed main()
{
//ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
    
solve();
}
    return 0;
}