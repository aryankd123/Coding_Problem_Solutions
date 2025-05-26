#include <bits/stdc++.h>
using namespace std;
#define int long long

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
int subsets(int digits,int no) {
    
int n=digits;
if(n%2==1)n++;
int ans=LLONG_MAX;
int subset_ct=(1<<n);
for(int mask=0;mask<subset_ct;mask++){
string subset;
if(__builtin_popcount(mask)==(n/2)){
for(int i=0;i<n;i++){
if((mask& (1<<i))!=0)subset.push_back('7');
else subset.push_back('4');
}
int num=stoll(subset);
if(num>=no && num<=ans)ans=num;
}

 }
 if(ans!=LLONG_MAX)return ans;
 else{
    n+=2;
    int subset_ct=(1<<n);
    for(int mask=0;mask<subset_ct;mask++){
    string subset;
    if(__builtin_popcount(mask)==(n/2)){
    for(int i=0;i<n;i++){
    if((mask& (1<<i))!=0)subset.push_back('7');
    else subset.push_back('4');
    }
    int num=stoll(subset);
    if(num>=no && num<=ans)ans=num;
    }

 }

 }
return ans;
}
void solve(){
int n;
cin>>n;
int digits=0;
int cpy=n;
while(cpy>0){
    digits++;
    cpy/=10;
}
int answer=subsets(digits,n);
cout<<answer;
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