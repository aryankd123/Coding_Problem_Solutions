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

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int ct=0;
vector<int> prefix1;
for(int i=0;i<n;i++){
    ct+=v[i];
    prefix1.push_back(ct);
}
sort(v.begin(),v.end());
int ct2=0;
vector<int> prefix2;
for(int i=0;i<n;i++){
    ct2+=v[i];
    prefix2.push_back(ct2);
}
int q;
cin>>q;

while(q--){
    int l,r,type;
    cin>>type>>l>>r;
    if(type==1){
    if(l==1){
        cout<<prefix1[r-1]<<'\n';
        }
    else cout<<prefix1[r-1]-prefix1[l-2]<<'\n';

    }
    else 
        {
            if(l==1){
            cout<<prefix2[r-1]<<'\n';
                    }
            else cout<<prefix2[r-1]-prefix2[l-2]<<'\n';
        }





}



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}