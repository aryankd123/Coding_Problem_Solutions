#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
double n,m,k;
cin>>n>>m>>k;
int flag=(m/n);
if(n==0 && m!=0){cout<<"No solution"<<'\n';return;}
if(n==0 && m==0){cout<<0<<'\n';return;}
if(m/n!=flag){cout<<"No solution"<<'\n';return;}
if(flag>=0){
for(int i=-flag;i<=flag;i++){
    if(pow(i,k)==flag){cout<<i;return;}
}}
if(flag<0){
for(int i=flag;i<=-flag;i++){
    if(pow(i,k)==flag){cout<<i;return;}
}}
cout<<"No solution"<<'\n';
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}