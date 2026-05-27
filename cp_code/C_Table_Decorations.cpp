#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
// int a,b,c;
// cin>>a>>b>>c;

vector<int> v;
for(int i=0;i<3;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
cout<<min((v[0]+v[1]+v[2])/3,v[0]+v[1]);


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}