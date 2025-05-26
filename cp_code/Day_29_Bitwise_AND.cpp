#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,k;
cin>>n>>k;
int ans=-1;
for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        if((i&j)>ans && (i&j)<k)ans=i&j;
    }
}
cout<<ans<<'\n';
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