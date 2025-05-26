#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
int flip(int a,int k){
if ((1<<k &a)>0)return 0;
else return 1;
}
void solve(){
     unsigned int n;
    cin>>n;
    int sum=0;
for(int i=0;i<32;i++){
    int a=flip(n,i);
sum+=a*pow(2,i);
}
cout<<sum<<'\n';
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}