#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
string s;
int n;
cin>>n;
cin>>s;
string s1=s;
reverse(s1.begin(),s1.end());
if(s1<s)cout<<s1<<s<<'\n';
else cout<<s<<'\n';

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