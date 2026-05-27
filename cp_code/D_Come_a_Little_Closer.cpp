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
void solve(){
int n;
cin>>n;
map<int,int> mp_x;
map<int,int> mp_y;


vector<pair<int,int>>v;

for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    mp_x[x]++;
    mp_y[y]++;
    v.push_back({x,y});
}
int ans=LLONG_MAX;
if(n==1 ){cout<<1<<"\n";return;}
if(n==2){cout<<2<<"\n";return ;}
for(int i=0;i<n;i++){
    int x=v[i].first;
    int y=v[i].second;
    mp_x[x]--;
    mp_y[y]--;
    auto it1=mp_x.rbegin();
    auto it2=mp_y.rbegin();

    auto it3=mp_x.begin();
    auto it4=mp_y.begin();

    if(it1->second==0)it1++;
    if(it2->second==0)it2++;
    if(it3->second==0)it3++;
    if(it4->second==0)it4++;
    
    int x1,y1,x2,y2;
    x2=it1->first;
    y2=it2->first;

    x1=it3->first;
    y1=it4->first;

int area=(x2-x1+1)*(y2-y1+1);
int flag=min((x2-x1+2)*(y2-y1+1),(x2-x1+1)*(y2-y1+2));

if(area==n-1)ans=min(ans,flag);
else ans=min(ans,area);

mp_x[x]++;
mp_y[y]++;
}
cout<<ans<<"\n";

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
//inverses();
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}