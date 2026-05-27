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
int n,m;
cin>>n>>m;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x%m);
}

sort(v.begin(),v.end());
int q;
cin>>q;
while(q--){
    int x;
    cin>>x;
    int flag=(x%m);
    
    auto it=upper_bound(v.begin(),v.end(),m-1-flag);
    if(it!=v.begin()){
    --it;
    cout<<flag+*it<<'\n';}
    else cout<<(v.back()+x)%m<<'\n';
}

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}