#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,k;
cin>>n>>k;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int l=0;
int res=INT_MAX;
//int r=0;
int sum=0;
for(int r=0;r<n;r++){
sum+=v[r];
while(sum>=k){
res=min(res,r-l+1);
    sum-=v[l];
    l++;
}
//cout<<l<<" "<<r<<'\n';

}
if(res==INT_MAX)cout<<"-1"<<'\n';
else cout<<res<<'\n';

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}