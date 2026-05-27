#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;
 
 
 
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
 
 
//***binary_multiplication***
//int bin_multiply(int a,int b){int ans=0;while(b){if(b&1)ans=(ans+a)%M;a=(a+a)%M; b=b>>1;} return ans;}
 
//***modular/bin_exponentiation***
//****recursive_code***
//int bin_exp_rec(int a,int b){a=a%M;if(b==0)return 1;long long   res=bin_exp_rec(a,b/2);  
//if (b&1)return (a* (res * res)%M)%M;else return (res*res)%M;}
//****iterative_code***
//int bin_exp_iter(int a,int b){a=a%M;int ans=1;while(b){if(b&1) ans=(bin_multiply(ans,a));
//a=bin_multiply(a,a);b=(b>>1);}return ans;}
 
 
 
// **Modular Multiplicative Inverse of A
//    int mmi(int a){
 //   int mmi_a=(bin_exp_iter(a,M-2));
 //  return mmi_a;}
 // 
//*****SUBSET GENERATION *****//
//vector<vector<int>> subsets(vector<int>& nums) {
//int n=nums.size();
//int subset_ct=(1<<n);
//vector<vector<int>>powerset;
//for(int mask=0;mask<subset_ct;mask++){
//vector<int> subset;
//for(int i=0;i<n;i++){
//if((mask& (1<<i))!=0)subset.push_back(nums[i]);
//}
//powerset.push_back(subset);
 //}
//return powerset;
//}
void solve(){
int n,m;
cin>>n>>m;
vector<vector<int>>v(n);
for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    a=a-1;b=b-1;
    v[a].push_back(b);
    v[b].push_back(a);
}

// for(int i=0;i<n;i++){
//  for(auto val:v[i])cout<<val<<" ";   
// cout<<'\n';
// }

if(m==n){
    int ct=0;
    for(int i=0;i<n;i++){
        if(v[i].size()==2)ct++;
    }
    if(ct==n){cout<<"ring topology";return;}
}
if(m==n-1){
int ct1=0;
int ct2=0;
int ctn_1=0;
    for(int i=0;i<n;i++){
        if(v[i].size()==1)ct1++;
        if(v[i].size()==2)ct2++;
        if(v[i].size()==n-1)ctn_1++;

    }
    if(ct1==2 && ct2==n-2){cout<<"bus topology";return;}

    if(ctn_1==1 && ct1==n-1){cout<<"star topology";return;}



}
cout<<"unknown topology";return;
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