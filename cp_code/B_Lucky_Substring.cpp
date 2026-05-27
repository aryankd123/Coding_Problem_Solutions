#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
string s;
cin>>s;
int count4=0;
int count7=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='4') count4++;
    else if(s[i]=='7')count7++;
}
if(count4>=count7 && count4>0)cout<<4;
else if(count7>0)cout<<7;
else cout<<-1;

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int t;
// cin>>t;
// while (t--){
solve();
// }
    return 0;
}