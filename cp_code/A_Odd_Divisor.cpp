#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
using namespace std;
typedef long long int lli;
void solve(){

lli n;
cin>>n;

if(n%2!=0)cout<<"YES"<<endl;
else{
    int count=1;
    while(pow(2,count)<=n){
        if(pow(2,count)==n){
            cout<<"NO"<<endl;break;}
    count++;
        if(pow(2,count)>n) cout<<"YES"<<endl;
    }




} }
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}