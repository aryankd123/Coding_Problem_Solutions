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
int i=1;
while (n%i==0) i++;
cout<<i-1<<endl;



} 
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