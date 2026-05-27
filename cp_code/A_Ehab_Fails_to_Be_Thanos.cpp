#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;

void solve(){
int n;
cin>>n;
int sum=0;
int sum1=0;
vector<int> v,v1;
for(int i=1;i<=2*n;i++){
int x;
cin>>x;
v.push_back(x);

v1.push_back(x);

}
sort(v.begin(),v.end());
for(int i=1;i<=2*n;i++){
if(i<=n)sum+=v[i];
if(i>n)sum1+=v[i];
}


if(sum==sum1){cout<<-1;return;}
 for(int i=0;i<2*n-1;i++)cout<<v[i]<<" ";
cout<<v[2*n-1];


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}