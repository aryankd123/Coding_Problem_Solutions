#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,m,x,y;
cin>>n>>m>>x>>y;
double dist1=(x-1)*(x-1)+(y-1)*(y-1);
double dist2=(x-n)*(x-n)+(y-m)*(y-m);
double dist3=(x-n)*(x-n)+(y-1)*(y-1);
double dist4=(x-1)*(x-1)+(y-m)*(y-m);

if(max({dist1,dist2,dist3,dist4})==dist1) {cout<<1<<" "<<1<<" "<<n<<" "<<m<<'\n';return;}
if(max({dist1,dist2,dist3,dist4})==dist2) {cout<<1<<" "<<1<<" "<<n<<" "<<m<<'\n';return;}
if(max({dist1,dist2,dist3,dist4})==dist3) {cout<<n<<" "<<1<<" "<<1<<" "<<m<<'\n';return;}
if(max({dist1,dist2,dist3,dist4})==dist4) {cout<<n<<" "<<1<<" "<<1<<" "<<m<<'\n';return;}

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




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