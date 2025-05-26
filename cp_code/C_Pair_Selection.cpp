#include <bits/stdc++.h>
using namespace std;
const int lowest = -1e6 ;
const int highest= 1e6 ;
bool can_form(double X,vector<pair<double,double>>&v,double k,double n){
    vector<double> flag;
    for(int i=0;i<n;i++){
        flag.push_back(v[i].first-X*v[i].second);

    }
sort(flag.rbegin(),flag.rend());
double sum=0;
for(int i=0;i<k;i++){
sum+=flag[i];
}
return sum>=0;
}
double bin_search(vector<pair<double,double>>&v ,double k,double n  ){
    double l=-1;
    double r=1e10+10;
    for(int i=0;i<100;i++){
    double m=(l+r)/2.0;
    if(can_form(m,v,k,n))l=m ;
    else r=m;

    }
    return l;
}


void solve(){
double n,k;
cin>>n>>k;
vector<pair<double,double>> v;

for(int i=0;i<n;i++){
    double x,y;
    cin>>x>>y;
    v.push_back({x,y});
}
double ans=bin_search(v,k,n);
cout << fixed << setprecision(8) << ans;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}