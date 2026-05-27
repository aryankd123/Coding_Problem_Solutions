#include <bits/stdc++.h>
using namespace std;
//#define int long long
void solve(){

int n,m;
cin>>n>>m;
int sum=0;
int count=0;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
 sum+=s.length();
 if(sum<=m)count++;
}
cout<<count<<'\n';
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
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}