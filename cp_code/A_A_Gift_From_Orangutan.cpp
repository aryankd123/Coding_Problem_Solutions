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
vector <int> v;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
cout<<(v[n-1]-v[0])*(n-1)<<endl;


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