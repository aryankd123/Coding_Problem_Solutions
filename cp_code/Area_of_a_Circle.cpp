#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
#define pi 3.141592653;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
void solve(){
double r;
cin>>r;
double ans=3.141592653*r*r;
cout<<fixed<<setprecision(9)<<ans;


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}