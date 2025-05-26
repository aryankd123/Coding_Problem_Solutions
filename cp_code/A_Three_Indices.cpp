#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<cmath>
using namespace std;
typedef long long ll;
void solve(){
int n;
cin>>n;
vector<int> v,v1;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
    v1.push_back(x);
}
int num=0;

int flag2=0;
int x,y,z;
for(int i=0;i<n;i++){int flag=0;
for(int j=i;j<n;j++){
    if(v[i]<v[j]&&flag==0){num=v[j];y=j;flag=1;}
    if(flag==1 && num>v[j]){flag2++;z=j;x=i;break;}
}
if(flag2>0)break;
}
if(flag2>0)cout<<"YES"<<endl<<x+1<<" "<<y+1<<" "<<z+1<<endl;
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