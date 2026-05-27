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
int n,r;
cin>>n>>r;

int rem=0;
int happy=0;
for (int i=0;i<n;i++){
    int x;
    cin>>x;

    int hap=x/2;
    hap=hap*2;
    happy=happy+hap;
rem=rem+(x%2);
}
if(rem==0) cout<<happy<<endl;
else if(rem>0 && rem<(r-(happy/2))) cout<<rem+happy<<endl;
 else cout<<happy+2*(r-happy/2)-rem<<endl;


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