#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

int n;
cin>>n;
string s;
cin>>s;
int count=0;
for(int i=0;i<n-1;i++){
if(s[i]==s[i+1])count++;
}

cout<<count;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}