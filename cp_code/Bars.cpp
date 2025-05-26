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
//*****SUBSET GENERATION *****//
bool  baba(vector<int>& nums,int no){
    int n=nums.size();
    int subset_ct=(1<<n);
    
    for(int mask=0;mask<subset_ct;mask++){
    int sum=0;
    for(int i=0;i<n;i++){
    if((mask& (1<<i))!=0)sum+=(nums[i]);
    }
    if(sum==no)return 1;
    }
    return 0;

    }
void solve(){
int req;
cin>>req;
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
bool val=baba(v,req);
if(val)cout<<"YES\n";
else cout<<"NO\n";



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