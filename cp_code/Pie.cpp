#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
#define pi 3.14159265358979323846
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
//***prefix xor function for prefix xor from 1 to a****
//int xor_ret(int a){
//if(a%4==0)return a;
//if (a%4==1)return 1;
//if(a%4==2)return a+1;
//return 0;
//}
bool can_dist(vector<double> & v,int n,double m,int f){
    int count=0;
    for(int i=0;i<n;i++){
        count+=((pi*v[i]*v[i])/m);
    }
    return count>f;
}
double bin_search(vector<double> & v,int n,int f){
    double l=0;
    double r=pi*10000*10000+1;
    while(r-l>1e-7){
        double m=(l+r)/2.0;
        if(can_dist(v,n,m,f))l=m;
        else r=m;
    }
    return l;
}
void solve(){
int n,f;
cin>>n>>f;

vector<double> v;
for(int i=0;i<n;i++){
double x;
cin>>x;
v.push_back(x);
}

double ans=bin_search(v,n,f);
cout<<fixed<<setprecision(5)<<ans<<'\n';


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
int t;
cin>>t;
while(t--){
solve();
}
    return 0;
}