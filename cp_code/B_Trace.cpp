#include <bits/stdc++.h>
using namespace std;
#define int long long
const double pi=3.1415926536;
void solve(){
int n;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
double ans=0;
sort(v.begin(),v.end());
int flag=0;
if(n%2!=0){
for(int i=0;i<v.size();i++){
    if(i%2==0 && i!=0){
        double r1=v[i];
        double r2=v[i-1];
        ans+=(pi*r1*r1)-(pi*r2*r2);

    }
    else if(i==0){ans+=pi*v[i]*v[i];}
}
}
else {
for(int i=0;i<v.size();i++){
    if(i%2!=0){
        double r1=v[i];
        double r2=v[i-1];
        ans+=(pi*r1*r1)-(pi*r2*r2);

    }



}}
cout<<setprecision(6)<<ans;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}