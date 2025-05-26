#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

int a,b;
cin>>a>>b;
int sum=0;
for(int i=2;i<=max(a,b);i+=2){
    sum+= (1+(a-i))*(1+(b-i));
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