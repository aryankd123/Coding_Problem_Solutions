#include <bits/stdc++.h>
using namespace std;
#define int long long
bool lucky(int a){
    while(a>0){if(a%10==8)return 1;a=a/10;}
    return 0;

}
void solve(){
int n;
cin>>n;
//if(n<0)n=n*-1;
int a=n;
while(1){
    a++;
    if(lucky(abs(a))){cout<<a-n;break;}
    
}



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}