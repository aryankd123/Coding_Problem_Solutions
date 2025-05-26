#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
bool is_prime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return 0;
    }
    return 1;
}
void solve(){
int n;
cin>>n;
if(n%2==0){cout<<n/2<<" "<<n/2<<'\n';return;}
if(is_prime(n)){cout<<1<<" "<<n-1<<'\n';return;}
for(int i=2;i*i<=n;i++){
    if(n%i==0){cout<<n/i<<" "<<n-(n/i)<<'\n';return;}
}

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




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