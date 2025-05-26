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
string s;
cin>>s;
int s_len=s.length();
vector<int> v;
int ct=0;
for(int i=0;i<s_len;i++){
    if(s[i]=='a')ct++;
    v.push_back(ct);
}
int q;
cin>>q;
while(q--){
    int a,b;
    cin>>a>>b;
    if(a==1)cout<<v[b-1]<<'\n';
    else cout<<v[b-1]-v[a-2]<<'\n';
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

solve();

    return 0;
}