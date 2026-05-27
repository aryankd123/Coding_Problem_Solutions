#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
void solve(){
int n;
cin>>n;
map<int,int> mp;
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
mp[x]++;
v.push_back(x);
}
int m;
cin>>m;

vector<int> v1;
for(int i=0;i<m;i++){
int x;
cin>>x;

v1.push_back(x);
}
vector<int>v2;
set<int> st2;
int ct=0;
for(int i=0;i<m;i++){
if(mp.find(v1[i])!=mp.end()){for(int j=0;j<mp[v1[i]];j++){v2.push_back(v1[i]);}st2.insert(v1[i]);ct++;}
}
for(int i=0;i<n;i++){
    if(st2.find(v[i])==st2.end())v2.push_back(v[i]);
}

sort(v2.begin()+ct,v2.end());

for(auto it=v2.begin();it!=v2.end();it++){
    cout<<*it<<" ";
}
cout<<'\n';

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