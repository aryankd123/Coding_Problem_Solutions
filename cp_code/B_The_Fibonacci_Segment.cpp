#include <bits/stdc++.h>
using namespace std;
#define int long long
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
int ans=0;
   int flag=0;
   int l=-1;
   int r=-1;
for(int i=0;i<n;i++){
 
    if(i-1>=0 && i-2>=0){
    if(v[i]==(v[i-1]+v[i-2])){if(flag==0){l=i-2;}flag++;if(i==n-1)r=n-1;}
    else if(v[i]!=(v[i-1]+v[i-2])){if(flag>0){r=i-1;}flag=0;}
    if(r-l+1>ans)ans=r-l+1;
    }
}
if(ans>=2)cout<<ans;
else if(n==1)cout<<1;
else if(n==2)cout<<2;
else cout<<2;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}