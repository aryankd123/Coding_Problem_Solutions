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
int s=0;
while(n>0){
    v.push_back(n%10);
    v2.push_back(1000);
   
    n=n/10;
    s++;
    
}
for(int i=0;i<s;i++){
   for(int j=i+1;j<s;j++) {if((v[j]*10+v[i])%25==0) v2[i]=j-1;break;}
}
int min=1000;
for(int k=0;k<s;k++){if(v2[k]<min) min=v2[k];}
cout<<min;
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