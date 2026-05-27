#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
bool to_bring_robin(vector<double>&v,double n,double sum,double x){
    double avg=(sum+x)/n;
    double hap_count=0;
    for(int i=0;i<n;i++){
        if(v[i]>(avg/2.0))hap_count++;
    }
    return hap_count<(n/2.0);

}




int bin_search(vector<double>& v,double n,double sum){
    int l=-2;
    int r=2e18+10;
    while(l+1<r){
        int m=(l+r)/2;
        if(to_bring_robin(v,n,sum,m))r=m;
        else l=m;
    }
    return r+1;
}
void solve(){
double n;
cin>>n;
double sum=0;
vector<double> v;
for(int i=0;i<n;i++){
double x;
cin>>x;
sum+=x;
v.push_back(x);
}
if(n==1 || n==2){cout<<-1<<'\n';return;}
int ans=bin_search(v,n,sum);
cout<<ans<<'\n';



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}