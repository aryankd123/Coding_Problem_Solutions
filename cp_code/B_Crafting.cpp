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
bool cmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first<p1.second)return 1;
    else return 0;
}
void solve(){
int n;
cin>>n;
vector<int> a1;
vector<int> b1;


for(int i=0;i<n;i++){
int x;
cin>>x;
a1.push_back(x);
}


for(int i=0;i<n;i++){
int x;
cin>>x;
b1.push_back(x);
}

vector<pair<int,int>>vp;
for(int i=0;i<n;i++){
    vp.push_back({a1[i],b1[i]});

}
sort(vp.begin(),vp.end(),cmp);
int def=INT_MIN;
int def_count=0;
int tot_def=0;
int tot_ext=0;
for(int i=0;i<n;i++){
    if(vp[i].first<vp[i].second){def_count++;def=max(def,(vp[i].second-vp[i].first));tot_def+=vp[i].second-vp[i].first;}

    if(def_count>1){cout<<"NO\n";return;}
    if(vp[i].first>vp[i].second){tot_ext+=vp[i].first-vp[i].second;if(vp[i].first-vp[i].second<def){cout<<"NO\n";return;}}
}
if(tot_ext<tot_def){cout<<"NO\n";return;}
cout<<"YES\n";
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