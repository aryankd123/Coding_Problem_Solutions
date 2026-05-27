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
using namespace std;
typedef long long int lli;
void solve(){

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
lli n,m;
cin>>n>>m;
set <lli> s1;
for(int i=0;i<n;i++){
    lli x;
    cin>>x;
    s1.insert(x);
}
for(int i=0;i<m;i++){
    lli x;
    cin>>x;

    auto it=s1.find(x);

    if(it!=s1.end())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    s1.insert (x);

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