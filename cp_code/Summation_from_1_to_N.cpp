#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n;
cin>>n;
if(n%2==0)cout<<(n/2)*(n+1);
else cout<<((n+1)/2)*(n);
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}