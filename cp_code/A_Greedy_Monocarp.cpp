#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n,k;
cin>>n>>k;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int sum=0;
int ans=0;
int flag=0;
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    if(sum+v[i]==k){ans=0;flag++;break;}
    else if (sum+v[i]>k){ans=k-sum;flag++;break;}
    sum=sum+v[i];
}
if(flag==0){ans=k-sum;}
cout<<ans<<'\n';



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