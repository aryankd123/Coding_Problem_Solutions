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
int min_diff(vector<int>& nums) {
int n=nums.size();
int min_val=INT_MAX;
int subset_ct=(1<<n);

for(int mask=0;mask<subset_ct;mask++){
int sum=0;
int sum2=0;
for(int i=0;i<n;i++){
if((mask& (1<<i))!=0){sum+=(nums[i]);}
else sum2+=nums[i];
}
if(abs(sum2-sum)<min_val && !(sum==0 &&sum2==0) )min_val=abs(sum2-sum);
 }


return min_val;
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
int ans=min_diff(v);
cout<<ans;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}