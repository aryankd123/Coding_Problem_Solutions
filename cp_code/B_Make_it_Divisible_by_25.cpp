#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<cmath>
using namespace std;
typedef long long ll;
typedef long long int  lli;
void solve(){
lli n;
cin>>n;
vector <int> v;
vector <int> v2;
while(n>0) {
    v.push_back(n%10);
    v2.push_back(30);
    n=n/10;

}
// for(int i=0;i<v.size();i++) cout<<v[i];
// cout<<endl;
for(int i=0;i<v.size();i++){
    for(int j=i+1;j<v.size();j++){
        if((10*v[j]+v[i])%25==0) {if(j-1<v2[i])v2[i]=j-1;}
    }
}
int min=100;
for(int c=0;c<v2.size();c++){
   if(v2[c]<min) min=v2[c];
}

cout<<min<<endl;

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