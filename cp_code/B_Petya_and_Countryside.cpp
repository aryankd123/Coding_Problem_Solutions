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
int flag1=0;
int flag2=0;
int ans=0;
int count=0;
for(int i=0;i<n;i++){
    flag1=0;
    flag2=0;
    count=0;
flag1=v[i];flag2=v[i];
for(int j=i;j<n;j++){
    if(v[j]<=flag1){count++;flag1=v[j];}
    else break;
}
for(int j=i-1;j>=0;j--){
    if(v[j]<=flag2){count++;flag2=v[j];}
    else break;
}
if(count>ans)ans=count;

}

cout<<ans;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}