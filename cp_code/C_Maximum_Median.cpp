#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
bool can_form(vector<int> & v,int n,int m,int k){
    int ct=0;
    for(int i=n/2;i<n;i++){
        if(v[i]<m)ct+=m-v[i];
        if (ct > k) {
            return false;  
        }
        
    }
    return ct<=k;
}
int bin_search(vector<int> & v,int n,int k){
int l=0;
int r=1e16+10;
while(l+1<r){
    int m=(l+r)/2;
    if(can_form(v,n,m,k))l=m;
    else r=m;
}
return l;
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
sort(v.begin(),v.end());
int ans= bin_search(v,n,k);
cout<<ans;


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}