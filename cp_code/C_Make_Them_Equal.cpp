#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//Precompute divisors(add precompute() to main)
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]+=i;}}}
void solve(){
int n;
char c;
cin>>n>>c;
string s;
cin>>s;
set<int> st;
for(int i=0;i<n;i++){
    if(s[i]!=c)st.insert(i+1);
}
if(st.empty()){cout<<0<<'\n';return;}
  for(int i=0;i<n;i++){  if(s[i]==c && i+1>n/2){cout<<1<<'\n'<<i+1<<'\n';return;}}

if(st.find(n)==st.end()){cout<<1<<'\n'<<n<<'\n';return;}
cout<<2<<'\n'<<n<<" "<<n-1<<'\n';



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