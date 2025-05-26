#include <bits/stdc++.h>
using namespace std;
 #define int long long
// const int lowest = -1e6 ;
// const int highest= 1e6 ;
void solve(){
int n,k;
cin>>n>>k;
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int sum=0;
sort(v.rbegin(),v.rend());
for(int i=0;i<k;i++){
   if(v[i]>0) sum+=v[i];
   else break;
}
cout<<sum;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}