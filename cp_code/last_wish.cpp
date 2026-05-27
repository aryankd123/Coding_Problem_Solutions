#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
bool cmp(pair<pair<int,int>,int>p1,pair<pair<int,int>,int>p2){
    if(p1.first.first+p1.first.second<p2.first.first+p2.first.second)return true;
    else if(p1.first.first+p1.first.second==p2.first.first+p2.first.second)return p1.first.first<p2.first.first;
    else return false;
}
bool cmp2(pair<pair<pair<int,int>,int>,int>p1,   pair<pair<pair<int,int>,int>,int>p2){
    return p1.first.second<p2.first.second;
}
void solve(){
int n;
cin>>n;

vector<pair<pair<int,int>,int>> v;
vector<pair<int,int>>v2;
for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;
v.push_back({{x,y},i});
v2.push_back({x,y});
}
sort(v.begin(),v.end(),cmp);
vector<pair<pair<pair<int,int>,int>,int>> v3;
for(int i=0;i<n;i++){
    v3.push_back({v[i],i});
}
sort(v3.begin(),v3.end(),cmp2);

for(int i=0;i<n;i++){
    cout<<v3[i].second<<" ";
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