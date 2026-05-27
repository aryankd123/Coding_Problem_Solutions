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
map <int,int> mp;
mp[25]=0;
mp[50]=0;
mp[100]=0;
int n;
cin>>n;
int flag=1;
while(n>0){

int x;
cin>>x;
if(x==25)mp[25]++;
if(x==50){
    mp[50]++;
    if(mp[25]<=0) {flag--;break;}
    mp[25]--;
    

}
if(x==100){
    mp[100]++;

    if(mp[50]>0){
        mp[50]--;
        if(mp[25]<=0) {flag--;break;}
        mp[25]--;
    }
    else if(mp[25]>=3) mp[25]=mp[25]-3;
    else {flag--;break;}

}



    n--;
}
if(flag==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;




} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int t;
// cin>>t;
// while (t--){
solve();
// }
    return 0;
}