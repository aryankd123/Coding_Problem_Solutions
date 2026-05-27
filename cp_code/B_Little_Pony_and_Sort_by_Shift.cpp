#include <bits/stdc++.h>
using namespace std;
#define int long long
#define  endl '\n'
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int flag=0;
int flag_dec=0;
for(int i=0;i<n-1;i++){
    if(v[i]<=v[i+1])flag++;
    if(v[i+1]<v[i])flag_dec++;
}
if(flag==n-1){cout<<0;return;}
if(n==2){cout<<1;return;}
if()
//if(n==3 && flag==1){cout<<-1;return;}
if
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