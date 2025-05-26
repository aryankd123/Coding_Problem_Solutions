#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int res=INT_MAX;
int l=0;
int flag=v[0];
for(int r=0;r<n;r++){
flag=__gcd(flag,v[r]);

while(flag!=1){
    flag=__gcd(v[l],flag);
    l++;

}

res=min(res,r-l+1);

}
cout<<res<<'\n';

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}