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
int n;
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=0;j<n-i;j++)cout<<"  ";
    if(i==0)cout<<0;
    else {for(int j=0;j<=i;j++){
        cout<<j<<" ";
    }
    for(int j=i-1;j>0;j--){
        cout<<j<<" ";
    }
    cout<<0;}
    
    cout<<"\n";

}
for(int i=n-1;i>=0;i--){
    for(int j=0;j<n-i;j++)cout<<"  ";
    if(i==0)cout<<0;
    else {
    for(int j=0;j<=i;j++){
        cout<<j<<" ";
    }
    for(int j=i-1;j>0;j--){
        cout<<j<<" ";
    }
    cout<<0;
    cout<<"\n";}
    

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

solve();

    return 0;
}