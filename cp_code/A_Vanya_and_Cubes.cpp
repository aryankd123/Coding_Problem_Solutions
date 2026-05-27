#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

int n;
cin>>n;
int i=1;
int flag=0;
int count=0;
while (n>=0){
count+=i;
flag++;
n-=count;
i++;
}

cout<<flag-1;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}