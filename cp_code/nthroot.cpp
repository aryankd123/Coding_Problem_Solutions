#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
bool is_this(double n,double m,double nth){
    double ans=1;
    for(int i=1;i<=nth;i++){
    ans*=m;
}
return ans<=n;
}
double bin_search(double n,double nth){
    double l=-1;
    double r=n;
    for(int i=0;i<100;i++){

    double m=(l+r)/2.0;
    if(is_this(n,m,nth)) l=m;
    else r=m;
}
return l;}


void solve(){
double nn,nnth;
cin>>nn>>nnth;

double anss=bin_search(nn,nnth);
cout<<anss;
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}