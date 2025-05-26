#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
//***prefix xor function for prefix xor from 1 to a****
//int xor_ret(int a){
//if(a%4==0)return a;
//if (a%4==1)return 1;
//if(a%4==2)return a+1;
//return 0;
//}
vector<int> prefix_xor_sum(vector<int> &v,int n){
    vector<int> ans(n,0);
    ans[0]=v[0];
    for(int i=1;i<n;i++){
        ans[i]=(ans[i-1]^v[i]);
    }
    return ans;
}

void solve(){
int n,q;
cin>>n>>q;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
vector<int> v2=prefix_xor_sum(v,n);

while(q--){
    int x,y;
    cin>>x>>y;
    if(x==1)cout<<v2[y-1]<<'\n';
   else cout<< (v2[x-2]^v2[y-1])<<'\n';
}


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()

solve();

    return 0;
}