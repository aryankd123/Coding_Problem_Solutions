#include <bits/stdc++.h>
using namespace std;
//#define int long long
int binSearch(int a,int b,int n){
    int l=0;
    int r=max(a,b)*n;
    
    while(l+1<r){
    int m=l+(r-l)/2;
    if(floor(m/a)*floor(m/b)<n)l=m;
    else r=m;}
    return r;
}
void solve(){

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
int a,b,n;
cin>>a>>b>>n;
int ans=binSearch(a,b,n);
cout<<ans;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}