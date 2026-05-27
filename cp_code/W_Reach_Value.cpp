#include <bits/stdc++.h>
using namespace std;
#define int long long
bool can_reach(int n,int start){
    if(start==n)return 1;
    else if(start>n)return 0;
    while(start<n){
    return (can_reach(n,start*10)|| can_reach(n,start*20));}
}
void solve(){

int n;
cin>>n;
if(can_reach(n,1)==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
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