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

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
int n;
cin>>n;
if(n==1)cout<<-1<<endl;
else if(n==2)cout<<66<<endl;
else if(n==3)cout<<-1<<endl;
else if(n%2==0) {
    for(int i=1;i<=n-2;i++)cout<<3;
    cout<<66<<endl;
}
else if(n%2!=0) {
    for(int i=1;i<=n-4;i++)cout<<3;
    cout<<6366<<endl;
}



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