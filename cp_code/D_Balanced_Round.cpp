#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,a;
cin>>n>>a;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
set<int> st;
int flag=0;
for(int i=0;i<n;i++){
    if(i<n-1 && v[i+1]-v[i]<=a)flag++;
    else { st.insert(flag+1);flag=0;}
}

cout<<n-(*(st.rbegin()))<<'\n';


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}