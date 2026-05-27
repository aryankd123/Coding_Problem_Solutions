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
int res=0;
//int r=0;
int sum=0;
for(int r=0;r<n;r++){
sum+=v[r];
while(sum>k){
    sum-=v[l];
    l++;
}
res+=r-l+1;
//res=max(res,r-l+1);
}
cout<<res;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}