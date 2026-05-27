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
   int msb(int x) {
    return 63 - __builtin_clzll(x); 
}
void solve(){
int l,r;
cin>>l>>r;
if(__builtin_popcount(r+1)==1){cout<<r<<'\n';return;}
//cout<<msb(l)<<msb(r);
if(msb(l)!=msb(r)){
    cout<<((1LL<<msb(r))-1)<<'\n';
}
else {
    int no=0;
    int flag=-1;

for(int i=0;i<63;i++){
    if((1LL<<i)&r){flag=i;break;}
  }
    for(int i=0;i<flag;i++){
        no=(no|(1LL<<i));
    }
    no=(no|(1LL<<msb(r)));
cout<<no<<'\n';

}
}
//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




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