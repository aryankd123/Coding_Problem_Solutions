#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

int n,m,k;
cin>>n>>m>>k;
string s;
cin>>s;
int count=0;
int flag=0;
for(int i=0;i<n;i++){
    if(s[i]=='0'){count++;if(count==m){flag++;count=0;i+=k-1;}}
    else if(s[i]=='1')count=0;
}

cout<<flag<<endl;



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