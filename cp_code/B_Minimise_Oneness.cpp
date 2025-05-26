#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
#include <unordered_map>
using namespace std;
typedef long long int lli;
void solve(){
int n;
cin>>n;
if(n%2==0){
    for(int i=1;i<=n;i++) {
        if(i<=n-1)cout<<0;
        else cout<<1;
        }

}
if(n%2!=0){
    for(int i=1;i<=n;i++) {
        if(i==n-1)cout<<1;
        else cout<<0;
        }

}
cout<<endl;


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