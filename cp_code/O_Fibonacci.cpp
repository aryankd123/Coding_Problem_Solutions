#include <bits/stdc++.h>
using namespace std;
#define int long long
int fib(int a){
    if(a==1)return 0;
    else if(a==2 ) return 1;
    return fib(a-1)+fib(a-2);
}
void solve(){

int n;
cin>>n;
cout<<fib(n);
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