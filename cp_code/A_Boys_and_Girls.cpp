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
int b,g;
cin>>b>>g;
int max=0;
int min=0;

if(b==g){
    while(b>0){
    cout<<'G';
    cout<<'B';
    b--;}
}

else{
if(b>g) {max=b;min=g;}
else {max=g;min=b;}



char max_el,min_el;
if(max==b){max_el='B';min_el='G';}
else {max_el='G';min_el='B';}
int flag=min;
cout<<max_el;
while (min>0){
cout<<min_el;
cout<<max_el;
min--;

}
for(int i=1;i<=max-(flag+1);i++){
    cout<<max_el;
}
} }
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