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
int a;
int b;
cin>>a;
cin>>b;

vector<int> v,v1;

int max,min=0;
if(a>=b){max =a;min=b;}
else{ max=b;min=a;}

while(max>0){
v.push_back(max%10);
max=max/10;
}

while(min>0){
v1.push_back(min%10);
min=min/10;
}

int flag=1;
for(int i=0; i<v1.size();i++){
if((v[i]+v1[i])>9){flag=0;break;}
}
//cout<<flag;
if(flag==0)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int t;
// cin>>t;
// while (t--){
solve();
// }
    return 0;
}