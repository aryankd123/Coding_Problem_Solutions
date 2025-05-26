#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<cmath>
using namespace std;
typedef long long ll;
void solve(){
ll a,b;
cin>>a>>b;
ll max_ex;
ll min_moves;
if(a<b){max_ex=b-a;min_moves=min(abs(a%(b-a)),b-a-ll(abs(a%(b-a))));}
else if(a>b) {max_ex=a-b;min_moves=min(abs(b%(a-b)),a-b-ll(abs(b%(a-b))));}
if(a==b)cout<<0<<" "<<0<<endl;
else cout<<max_ex<<" "<<min_moves<<endl;


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