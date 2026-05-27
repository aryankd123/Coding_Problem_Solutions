#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,a,b;
cin>>n>>a>>b;


int g=gcd(a,b);
vector<int>v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x%g);
}
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
int ans=INT_MAX;
for(auto it=v.begin();it!=v.end();it++){
if(it==v.begin()){ans=min(ans,abs((*it)-*v.rbegin()));
                  }
else {auto it2=it;
  --it2;
  ans=min(ans,abs(*it+g-*(it2)));}


}
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