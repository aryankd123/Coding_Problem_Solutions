#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n;
cin>>n;
int m;
cin>>m;
int sum=0;
for(int i=0;i<m-1;i++){
    int x;
    cin>>x;

    sum+=n-x;
}
cout<<sum;
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

solve();

    return 0;
}