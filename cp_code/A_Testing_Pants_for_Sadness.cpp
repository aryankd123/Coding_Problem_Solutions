#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
int ans=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
ans+=x+i*(x-1);
}
cout<<ans;
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}