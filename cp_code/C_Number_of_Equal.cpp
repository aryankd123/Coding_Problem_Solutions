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
int ans=0;
v1.push_back(INT_MAX);
v2.push_back(INT_MAX);
int count=1;
int counter=0;

while(counter<(m)){
    if(v1[i]==v1[i+1]){count++;i++;}
    else if(v1[i]==v2[j]){j++;ans+=count;counter++;}
    else if(v1[i]<v2[j]){i++;count=1;}
    else if(v1[i]>v2[j]){j++;count=1;counter++;}
}
cout<<ans;
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