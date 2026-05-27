
#include <bits/stdc++.h>
using namespace std;
// #define int long long
int solve(){
 
int a,b;
cin>>a>>b;
int x=max(a,b);
while(1){
if(x%a==x%b){cout<<x<<endl;return 0;}
x++;
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