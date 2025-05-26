#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int sum=0;
int n;
cin>>n;
sum+=(n*(n+1))/2;
int pow2=1;
int i=0;
while(pow2<=n){
    sum-=2*pow(2,i);
    i++;
    pow2=pow(2,i);
}
//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}

cout<<sum<<'\n';


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