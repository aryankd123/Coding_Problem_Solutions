#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
    string ans;

for(int i=0;i<8;i++){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='.')ans.push_back(s[i]);
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