#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,k;
cin>>n>>k;

int a=1;
vector<int> v(n);
for(int i=0;i<n;i++){
if((i+1)%k==0){v[i]=a;a++;}

}
for(int i=0;i<n;i++){
    if(v[i]==0){v[i]=a;a++;}
}

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<'\n';

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