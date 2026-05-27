#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e5+10 ;
//****Precompute divisors(add precompute() to main)****
int arr[highest];
void precompute() 
{for (int i = 1; i < highest; i++) {arr[i] = 0;}
    for (int i = 1; i < highest; i++) {
        for (int j = i; j < highest; j += i) {arr[j]++;}
            }
                }

//***prefix xor function for prefix xor from 1 to a****
//int xor_ret(int a){
 bool isprime(int n){
    if(arr[n]<=2)return 1;
    else return 0;
 }

void solve(){
int d;
cin>>d;
int a=1;
int b=a+d;
while(!isprime(b)){b++;}
int c=b+d;
while(! isprime(c)){c++;}
cout<<b*c<<'\n';



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
precompute();
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}