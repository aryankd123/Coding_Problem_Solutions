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
// if(n==1 && ((k&1)==0)){cout<<"NO\n";return;}
// if(n==1 && ((k&1)!=0)){cout<<"YES\n"; for(int i=1;i<=k;i++){cout<<i<<" ";}cout<<"\n";return;}
if(k==1){
    cout<<"YES\n";
    for(int i=1;i<=n;i++){
        cout<<i<<'\n';
    }
    return;
}
if(n%2==1 ) {cout<<"NO\n";return;}
if(n%2==0){
    cout<<"YES\n";
    int ct=0;
    for(int i=1;i<=n*k;i+=2){
        cout<<i<<" ";ct++;
        if(ct%k==0)cout<<'\n';

    }
    for(int i=2;i<=n*k;i+=2){
        cout<<i<<" ";ct++;
        if(ct%k==0)cout<<'\n';

    }
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
//precompute()
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}