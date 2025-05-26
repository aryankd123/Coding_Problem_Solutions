#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
#include <unordered_map>
#include<map>
#include<unordered_set>
#include <set>
#include <iomanip>
using namespace std;
typedef long long int lli;
void solve(){

int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int flag=1;
for(int i=0;i<n-1;i++){
    if(abs(v[i]-v[i+1])==5 ||abs(v[i]-v[i+1])==7)flag++;
}
if(flag==n)cout<<"YES"<<endl;
else cout<<"NO"<<endl;


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