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
string s1,s2;
cin>>s1>>s2;

int same=0;
for(int i=0;i<min(s1.size(),s2.size());i++){
    if(s1[i]==s2[i])same++;
    else break;
}
if(same!=0) cout<<(s1.size()-same)+(s2.size()-same)+same+1<<endl;
else cout<<s2.size()+s1.size()<<endl;



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