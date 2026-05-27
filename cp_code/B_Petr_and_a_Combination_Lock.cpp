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
bool car_open(vector<int> &v,int n){
    int no=0;
    vector<int> baba;
    baba.push_back(0);
    for(int i=0;i<n;i++){
        vector<int>flag;
        for(int j=0;j<baba.size();j++){
            flag.push_back(baba[j]+v[i]);
            flag.push_back(baba[j]-v[i]);

        }
        baba.clear();
        baba.assign(flag.begin(),flag.end());
    }
    //for(int i=0;i<baba.size();i++){cout<<baba[i];}
    for(int i=0;i<baba.size();i++){
        if(baba[i]%360==0)return 1;

    }
    return 0;

}
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
if(car_open(v,n)){cout<<"YES\n";}
else cout<<"NO\n";



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}