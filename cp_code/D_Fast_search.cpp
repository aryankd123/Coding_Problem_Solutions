#include <bits/stdc++.h>
using namespace std;
// #define int long long
 // #define int long long

int binSearch( vector<int> &v1 , int x1,int &flag){
    
    int l=-1;
    int r=v1.size();
    while(l+1<r){
    int m =l+(r-l)/2;
    
    if(v1[m]<x1) {l=m;if(v1[m]==x1)flag++;}
    else r=m;
    }
   
    return l;
}
int binSearch1( vector<int> &v1 , int x2,int &flag){
    int l=-1;
    int r=v1.size();
    while(l+1<r){
    int m =l+(r-l)/2;
    
    if(v1[m]<=x2) l=m;
    else {r=m;if(v1[m]==x2)flag++;}
    }
   
    return r;
}
void solve(){

int n;
cin>>n;
 
vector<int> v;

for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
sort (v.begin(),v.end());
int k;
cin>>k;
while (k--){
    int flag=0;
    int x,y;
    cin>>x>>y;
    int ansl=binSearch(v,x,flag);
    int ansr=binSearch1(v,y,flag);
    //int flag=0;
    //cout<<ansl<<" "<<ansr<<endl;
   cout<<ansr-ansl-1+flag<<" ";
   
}


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}