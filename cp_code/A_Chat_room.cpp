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
int flag_h=-1;
int flag_e=-1;
int flag_l1=-1;
int flag_l2=-1;
int flag_o=-1;

for(int i=0;i<s.size();i++){
    if(s[i]=='h' && flag_h==-1){flag_h=i;continue;}
    if(s[i]=='e' && flag_e==-1 && flag_h!=-1){flag_e=i;continue;}
    if(s[i]=='l' && flag_l1==-1 && flag_e!=-1){flag_l1=i;continue;}
    if(s[i]=='l' && flag_l2==-1 && flag_l1!=-1){flag_l2=i;continue;}
    if(s[i]=='o' && flag_o==-1 && flag_l2!=-1){flag_o=i;continue;}

}

if(flag_h==-1 || flag_e==-1 || flag_l1==-1 || flag_l2==-1 || flag_o==-1) cout<<"NO\n";
else cout<<"YES\n";


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