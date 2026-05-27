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
int  subsets(vector<pair<int,int>>& nums,int W) {
int n=nums.size();
int subset_ct=(1<<n);
int ans=INT_MIN;
for(int mask=0;mask<subset_ct;mask++){
vector<int> subset;
int sum=0;
int flag=0;
for(int i=0;i<n;i++){
if((mask& (1<<i))!=0){if(flag+nums[i].first<=W){sum+=(nums[i].second);flag+=nums[i].first;}
}
 }
ans=max(sum,ans);
}
return ans;
}
void solve(){
int n;
int W;
cin>>n;
cin>>W;

vector<pair<int,int>> v;
for(int i=0;i<n;i++){
int x;
int y;

cin>>x;
cin>>y;

v.push_back({x,y});
}
int answer=subsets(v,W);
cout<<answer;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}