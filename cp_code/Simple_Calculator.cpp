#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
void solve(){
int x,y;
cin>>x>>y;
cout<<x<<" + "<<y<<" = "<<x+y<<'\n';
cout<<x<<" * "<<y<<" = "<<x*y<<'\n';
cout<<x<<" - "<<y<<" = "<<x-y<<'\n';

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}