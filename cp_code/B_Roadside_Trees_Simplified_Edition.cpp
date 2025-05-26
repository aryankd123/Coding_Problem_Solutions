#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int sum=0;
sum+=v[0]+1;
if(n==1){
    cout<<v[0]+1;
}
else {
if(v[0]<=v[1])sum+=2+v[1]-v[0];
else if(v[0]>v[1])sum+=v[0]-v[1]+2;
for(int i=1;i<n-1;i++){
if(v[i+1]>=v[i])sum+=v[i+1]-v[i]+2;
else if(v[i+1]<v[i])sum+=v[i]-v[i+1]+2;
}

cout<<sum;
}

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}