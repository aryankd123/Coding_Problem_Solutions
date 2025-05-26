#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
void solve(){
int n;
cin>>n;
int years=n/365;
int days_left=n-years*365;
int months=days_left/30;
 days_left=days_left-months*30;
 cout<<years<<" years\n";
 cout<<months<<" months\n";
 cout<<days_left<<" days\n";

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}