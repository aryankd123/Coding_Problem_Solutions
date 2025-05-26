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
int max1=0;
int max2=0;

for(int i=0;i<n;i++){
    int x,y;
    cin>>x;
    cin>>y;
    if(x>max1)max1=x;
    if(y>max2)max2=y;


}
cout<<2*(max1+max2)<<endl;


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