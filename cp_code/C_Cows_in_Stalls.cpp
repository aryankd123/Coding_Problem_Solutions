#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
bool can_arrange(vector<int>& v,int vec_size,int cows,int m){
    int count=1;
    int l=0;
    for(int r=1;r<vec_size;r++){
        if(v[r]-v[l]>=m){count++;l=r;}
        if(count>=cows)return 1;
    }
  return 0;

}
int bin_search(vector<int> &v,int n,int cows){
    int l=0;
    int r=v[n-1]+10;
    while(l+1<r){
        int m=(l+r)/2;
        if(can_arrange(v,n,cows,m)) l=m;
        else r=m;
    }
    return l;
}


void solve(){
int n,cows;
cin>>n>>cows;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
int ans=bin_search(v,n,cows);
cout<<ans<<'\n';



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--){
solve();
}
    return 0;
}