#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
unsigned int reversedbit(unsigned int n){
    unsigned int reversed=0;
    for(int i=0;i<32;i++){
        reversed=reversed<<1;
        int flag=n&1;
        reversed=reversed|flag;
        n=n>>1;
    }


    return reversed;
}
void solve(){

unsigned int a;
cin>>a;
cout<<reversedbit(a)<<'\n';
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