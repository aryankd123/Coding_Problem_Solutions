#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest=-1e6;
const int highest=1e6;
void solve(){
int n;
cin>>n;
 
vector<int> v1;
for(int i=0;i<n;i++){
int x;
cin>>x;
v1.push_back(x);
}
vector<int> v2;
for(int i=0;i<n;i++){
int x;
cin>>x;
v2.push_back(x);
}
int d_sum=lowest;
int ans=0;
int flag=0;
for(int i=0;i<n;i++){
    if(v1[i]+v2[i]>d_sum){d_sum=v1[i]+v2[i]; flag=max(v1[i],v2[i]);}
    if(v1[i]>=v2[i])ans=ans+v1[i];
    else ans+=v2[i];
}
// if(n==1)cout<<v1[0]+v2[0]<<'\n';
 cout<<ans+d_sum-flag<<'\n';
 
 
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