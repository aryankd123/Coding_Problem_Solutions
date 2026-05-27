#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
const int lowest = -1e6 ;
const int highest= 1e6 ;
double binSearch(double c){
    double l=-1;
    double r=1e10+10;
    for(int i=0;i<100;i++){
    double m=(l+r)/2;
    double ans=pow(m,2)+pow(m,0.5);
    if(ans>c) r=m;
    else l=m;}
    return l;
}
void solve(){
double C;
cin>>C;
double ans=binSearch(C);
cout << fixed << setprecision(6) << ans << '\n';



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}