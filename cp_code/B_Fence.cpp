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
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
vector<int>prefix;
int ct=0;
for(int i=0;i<n;i++){
    ct+=v[i];
    prefix.push_back(ct);
}
int min_index=0;
int min_val=0;
for(int i=0;i<n;i++){
    if(i==0){min_index=0+1;min_val=prefix[k-1];}
    else {
        if(i+k-1<n){
        if(prefix[i+k-1]-prefix[i-1]<min_val){min_val=prefix[i+k-1]-prefix[i-1];min_index=i+1;}}
    }
}
cout<<min_index;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}