#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
int swap(int a){
    vector<int>v;
    for(int i=0;i<32;i++){
        int flag=(a&1);
        v.push_back(flag);
        a=(a>>1);
    }
    int ans=0;


    for(int i=0;i<31;i+=2){
        swap(v[i],v[i+1]);
  
    }
    //     for(int i=0;i<31;i++){
    //    cout<<v[i]<<" ";
    // }
    // cout<<'\n';
    for(int i=0;i<32;i++){
        ans+=pow(2,i)*v[i];
  
    }
    return ans;

}
void solve(){
int n;
cin>>n;
cout<<swap(n)<<'\n';
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