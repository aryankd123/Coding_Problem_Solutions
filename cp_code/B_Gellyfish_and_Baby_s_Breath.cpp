#include <bits/stdc++.h>
using namespace std;
//#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =998244353;
 
 
 
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
int bin_multiply(int a,int b){int ans=0;while(b){if(b&1)ans=(ans+a)%M;a=(a+a)%M; b=b>>1;} return ans;}
 
//***modular/bin_exponentiation***
//****recursive_code***
//int bin_exp_rec(int a,int b){a=a%M;if(b==0)return 1;long long   res=bin_exp_rec(a,b/2);  
//if (b&1)return (a* (res * res)%M)%M;else return (res*res)%M;}
//****iterative_code***
int bin_exp_iter(int a,int b){a=a%M;int ans=1;while(b){if(b&1) ans=(bin_multiply(ans,a));
a=bin_multiply(a,a);b=(b>>1);}return ans;}
 
 
 
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
 //   int fac[MAXN + 1];
// int inv[MAXN + 1];
//void factorial() {
//fac[0] = 1;
//for (int i=1;i<=MAXN;i++){fac[i]=fac[i-1]*i%MOD; }
//}
//void inverses() {
//inv[MAXN]=mmi(fac[MAXN],MOD);
//for (int i = MAXN; i >= 1; i--) { inv[i - 1] = inv[i] * i % MOD; }
//}
//int choose(int n, int r) { return fac[n] * inv[r] % MOD * inv[n - r] % MOD; }
// int min_max_binsearch(vector<int>& nums, int k) {
// int n=nums.size();int sum=0;int ans=-1;int l = *max_element(nums.begin(), nums.end());     // the min possible subarray sum is the largest value of the array
// for(int i=0;i<n;i++){sum+=nums[i];}
// int r=sum; // the max possible sum of the subarray will be the subarray which is the entire array 
// while(l<=r){int mid=(l)+(r-l)/2;int ct=1;int pnt=-1;int flag_s=nums[0];for(int i=1;i<n;i++){  if(flag_s>mid){pnt=0;break;}   
// flag_s+=nums[i];}if(ct>k || pnt==0){l=mid+1;}           //move to the larger subarray sum 
// if(ct<=k){r=mid-1;ans=mid;}}return ans;}
pi maxi(pi p1,pi p2){
    if(p1.first>p2.first)return p1;
    else if(p1.first==p2.first){if(p1.second>=p2.second)return p1;else return p2; }
    return p2;
}
void solve(){
int n;
cin>>n;
vector<int>p;
priority_queue<pi>st1;
priority_queue<pi>st2;
vector<int> q;
for(int i=0;i<n;i++){
int x;
cin>>x;
p.push_back(x);
}
for(int i=0;i<n;i++){
int x;
cin>>x;
q.push_back(x);
}
vector<int> final;
for(int i=0;i<n;i++){
    st1.push({p[i],i});
    st2.push({q[i],i});
    int flag1=st1.top().first;
    int val1=q[i-st1.top().second];

    int flag2=st2.top().first;
    int val2=p[i-st2.top().second];

    pi ans=maxi({flag1,val1},{flag2,val2});
    final.push_back((bin_exp_iter(2,ans.first)+bin_exp_iter(2,ans.second))%M);
}

for(int i=0;i<n;i++){
    cout<<final[i]<<" ";
}
cout<<'\n';
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
//factorial();
//inverses();
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}