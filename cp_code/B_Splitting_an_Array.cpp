#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;


bool can_find(vector<int>&v,int vec_size,int m,int p){
    int sum=0;
    int flag=0;
for(int i=0;i<vec_size;i++){
    if(v[i]>m){return 0;}
    if(sum+v[i]>m){sum=0;flag++;}
    sum+=v[i];
    
    
}
if(flag>=p){return 0;}
return 1;
}



int bin_search(vector<int> &v,int n,int p,int maxi){
    int l=0;
    int r=maxi;
    while(l<r){
        int m=(l+r)/2;
        if(can_find(v,n,m,p)) r=m;
        else l=m+1;
        //cout<<l<<" "<<r<<endl;
    }
    return l;
}



void solve(){
int n,p;
cin>>n>>p;
//int mini=INT_MAX;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int maxi=accumulate(v.begin(),v.end(),0);
int ans=bin_search(v,n,p,maxi+10);
cout<<ans<<'\n';


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}