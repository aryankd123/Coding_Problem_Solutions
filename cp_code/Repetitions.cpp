#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
string s;
cin>>s;
int a=s.size();
int count=1;
int ans=0;
for(int i=0;i<a;i++){
    if(i+1<a){if(s[i]==s[i+1]){count++;}
                else {if(count>ans){ans=count;}count=1;}}

}
if(count>ans)cout<<count;
else cout<<ans;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}