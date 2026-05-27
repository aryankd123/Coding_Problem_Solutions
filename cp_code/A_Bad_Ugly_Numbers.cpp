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
if(n==1){cout<<"-1\n";return;}
if(n==2){cout<<"53\n";return;}
vector<int> v;
v.push_back(3);

int sum=3;
for(int i=0;i<n-1;i++){
    if((sum+5)%3==0){v.push_back(4);sum+=4;}
    else{ v.push_back(5);sum+=5;}
}
reverse(v.begin(),v.end());
for(auto val:v){
    cout<<(val);
}
cout<<'\n';
//if((n-1)%3!=0){for(int i=1;i<n;i++){cout<<2;}cout<<3<<'\n';return;}


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