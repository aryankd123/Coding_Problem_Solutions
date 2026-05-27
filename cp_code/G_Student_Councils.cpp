#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int lowest = -1e6 ;
//const int highest= 1e6 ;
bool can_make(int n,vector<int> v,int m,int k){
    vector<int> flag(m);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=min(v[i],m);
        if(sum>=m*k)return 1;

    }
    return 0;
}
int bin_search(int n,vector<int>&v,int k){
    int l=0;
     int r = 
while(l+1<r){
int m=(l+r)/2;
if(can_make(n,v,m,k))l=m;
else r=m;
}
return l;



}
void solve(){
    int k;
    cin>>k;
    int n;
    cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
int ans=bin_search(n,v,k);
cout<<ans;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}