#include <bits/stdc++.h>
using namespace std;
// #define int long long
int binSearch(vector<int> v1 , int x1){
    int l=0;
    int r=v1.size()-1;
    while(l+1<r){
    int m =l+(r-l)/2;
    if(v1[m]==x1) return 1;
    else if(v1[m]<x1) l=m;
    else if(v1[m]>x1) r=m;
    }
    if(v1[l]==x1 || v1[r]==x1)return 1;
    else return 0;
}
void solve(){
 
int n,k;
cin>>n>>k;
 
vector<int> v;
sort (v.begin(),v.end());
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
 
while (k--){
    int x;
    cin>>x;
    int ans=binSearch(v,x);
    if(ans==0)cout<<"NO\n";
    else cout<<"YES\n";
}
 
 
 
 
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
solve();
 
    return 0;
}