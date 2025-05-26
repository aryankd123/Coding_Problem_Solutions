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
bool cmp(tuple<int,int,char>&t1,tuple<int,int,char>&t2){
    if(get<0>(t1)<get<0>(t2))return 1;
    if(get<0>(t1)==get<0>(t2)){return get<1>(t1)>get<1>(t2);}
    return 0;
}
void solve(){
string s;
cin>>s;
vector<tuple<int,int,char>>v;
int size=s.size();
int l_c=0;
int r_c=0;
int prefix_bal=0;
for(int i=0;i<size;i++){
    prefix_bal=l_c-r_c;
    v.push_back(make_tuple(prefix_bal,i,s[i]));
    //  get<0>(v[i]) = prefix_bal;
    //  get<1>(v[i])=i;
    //  get<2>(v[i])=s[i];
    if(s[i]=='(')l_c++;
    if(s[i]==')')r_c++;
}
sort(v.begin(),v.end(),cmp);
for(auto val:v){
    cout<<get<2>(val);
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
//factorial();

solve();

    return 0;
}