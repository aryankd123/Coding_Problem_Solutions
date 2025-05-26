#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
string s;
cin>>s;
if(s[0]<s[2])s[1]='<';
else if(s[0]==s[2])s[1]='=';
else s[1]='>';
cout<<s<<'\n';

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