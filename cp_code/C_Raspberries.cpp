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
int mini=INT_MAX;
vector<int> v;
if(k!=4){
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
if(x%k==0){mini=0;}
else if(k-x%k<mini){mini=k-x%k;}
}
cout<<mini<<'\n';return;}
if(k==4){
    int mini=INT_MAX;
    int ct=0;
    int ct4=0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%4==2)ct++;
        if(x%4==0){ct4++;mini=0;}
        if(k-x%k<mini){mini=k-x%k;}
    }

   if(ct4>0){cout<<0<<'\n';return ;}
   else if(ct==2){cout<<"0"<<'\n';return ;}
    
    else if(ct==1){if(1<mini)mini=1;cout<<mini<<'\n';return ;}
    else if(ct==0){if(mini<2)cout<<mini<<'\n';else cout<<2<<'\n';return;}
    
}


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