#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
void solve(){
int a,b,c,d;
cin>>a>>b>>c>>d;
a%=100;
b%=100;
c%=100;
d%=100;
int ans=(a*b*c*d);
int l=ans%10;
ans/=10;
int ll=ans%10;
cout<<ll<<l;
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}