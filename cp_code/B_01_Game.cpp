#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<cmath>
using namespace std;
void solve(){
vector<char> v;
string s;
cin>>s;
int a=s.size();
for(int i=0;i<a;i++){
v.push_back(s[i]);}
int min0=0;
int min1=0;
for(int i=0;i<a;i++){
    if(v[i]=='0')min0++;
    else min1++;
}
//cout<<min0<<" "<<min1<<endl;
int n;
if (min1<=min0) n=min1;
else n=min0;



if (n%2==0) cout<<"NET"<<endl;
else cout<< "DA"<<endl;
//cout<<v[0]<<endl;





} 
int main()
{
int t;
cin>>t;
while (t--){

solve();
}
    return 0;
}