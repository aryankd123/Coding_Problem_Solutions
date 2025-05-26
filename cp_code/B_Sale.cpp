#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n,m;
cin>>n>>m;
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
int sum=0;

for(int i=0;i<m;i++){
if(v[i]<0)sum+=(-v[i]);

}
cout<<sum;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}