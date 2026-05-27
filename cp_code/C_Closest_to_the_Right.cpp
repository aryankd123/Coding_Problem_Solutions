#include <bits/stdc++.h>
using namespace std;
// #define int long long
 // #define int long long
int binSearch( vector<int> &v1 , int x1){
    int l=-1;
    int r=v1.size();
    while(l+1<r){
    int m =l+(r-l)/2;
    
    if(v1[m]<x1) l=m;
    else r=m;
    }
   
    return r+1;
}
void solve(){

int n,k;
cin>>n>>k;
 
vector<int> v;

for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
//sort (v.begin(),v.end());
while (k--){
    int x;
    cin>>x;
    int ans=binSearch(v,x);
    cout<<ans <<"\n";
}


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}