#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define double long double
//const int ep=1e-6;
 
double binSearch(vector<int> &v,int k,int n){
double l=0;
double r=1e9;
for(int j=0;j<100;j++){
    double m=(l+r)/2.0;
    int total_pie=0;
    for(int i=0;i<n;i++){
        total_pie+=int(v[i]/m);
    }
    if(total_pie<k)r=m;
    else l=m;
}
return r;
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
double ans=binSearch(v,k,n);
cout << fixed << setprecision(6) << ans << endl;
 
 
 
} 
signed main()
{
 
 
solve();
 
    return 0;
}