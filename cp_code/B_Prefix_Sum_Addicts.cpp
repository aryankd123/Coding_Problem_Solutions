#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
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
void solve(){
int n,k;
cin>>n>>k;

vector<int> v;
for(int i=0;i<k;i++){
int x;
cin>>x;
v.push_back(x);
}

vector <int> p;
for(int i=1;i<k;i++){
    p.push_back(v[i]-v[i-1]);
}
if(k==1 ){cout<<"Yes\n";return;}
if(!is_sorted(p.begin(),p.end())){cout<<"No\n";return;}
if((n-k+1)*p[0]>=v[0]){cout<<"Yes\n";return;}
else {cout<<"No\n";return;}




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