#include <bits/stdc++.h>
using namespace std;
//#define int long long
void solve(int t){
int n;
cin>>n;
vector<int> v;
int sum=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
sum+=x;
}
cout<<"Case "<<t<<": "<<sum<<endl;




} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
for(int i=1;i<=t;i++){
solve(i);
}
    return 0;
}