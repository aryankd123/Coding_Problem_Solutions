#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
int n,t;
cin>>n>>t;
string s;
cin>>s;
while(t--){
for(int i=0;i<n-1;i++){
    if(s[i]=='B'&& s[i+1]=='G'){swap(s[i],s[i+1]);i++;}
}
}

cout<<s;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}