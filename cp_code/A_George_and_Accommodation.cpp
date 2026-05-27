#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

int n;
cin>>n;
int count=0;
while(n--){
    int x,y;
    cin>>x>>y;
if(y-x>1)count++;
}
cout<<count;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}