#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,m;
cin>>n>>m;
int i=0;int j=0;


vector<int> v1;
for(int i=0;i<n;i++){
int x;
cin>>x;
v1.push_back(x);
}


vector<int> v2;
for(int i=0;i<m;i++){
int x;
cin>>x;
v2.push_back(x);
}
//vector<int> ans;
v1.push_back(INT_MAX);
v2.push_back(INT_MAX);
int count=0;
while(count<(m)){
if(v1[i]<v2[j]){i++;}
else {cout<<i<<" ";j++;count++;}
}
// for(auto val:ans){
//     cout<<val<<" ";
// }
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}