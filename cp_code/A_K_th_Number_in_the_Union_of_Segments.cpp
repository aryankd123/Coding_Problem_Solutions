#include <bits/stdc++.h>
using namespace std;
#define int long long
// const int lowest = -1e6 ;
// const int highest= 1e6 ;
bool calc(vector<pair<int,int>>&v,int n,int k,int X){
    int sum=0;
for(int i=0;i<n;++i){
    // for(int j=v[i].first;j<=v[i].second;j++){
    //     if(j<X)sum++;
    // }
    int l=v[i].first;int r=v[i].second;

    if(X<l){sum+=0;}
    else {
    sum+=min(X-l,r-l+1);}

}
return sum<=k;
}
int bin_search(vector<pair<int,int>>&v,int n,int k){
    int l=-2e9-10;
    int r=2e9+10;
    while(l+1<r){
        int m=(l+r)/2;
        if(calc(v, n, k,m))l=m;
        else r=m;
    }
    return l;
}




void solve(){
int n,k;
cin>>n>>k;

vector<pair<int,int>> v;
for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;
v.push_back({x,y});
}
int ans=bin_search(v,n,k);
cout<<ans;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}