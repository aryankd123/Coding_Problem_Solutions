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
string s;
int count=0;
cin>>s;
//cout<<s;
for(int i=0;i<n;i++){

    if(s[i]=='1')count++;
}
if(n%2!=0){
if(count>=(n/2)+1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
else if(n%2==0){
if(count>=(n/2))cout<<"YES"<<endl;
else cout<<"NO"<<endl;
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