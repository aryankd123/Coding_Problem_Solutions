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

int d,st;
cin>>d>>st;


vector<int> v,v1,v2;
for(int i=0;i<d;i++){
int x,y;
cin>>x>>y;
v.push_back(x);
v1.push_back(y);
v2.push_back(y-x);
}

int minsum=0;
int maxsum=0;
for(int i=0;i<d;i++){
    minsum=minsum+v[i];
    maxsum=maxsum+v1[i];
}

if(minsum>st||maxsum<st)cout<<"NO"<<endl;
else {
    int sum_left=st-minsum;
for(int i=0;i<d;i++){
    sum_left=sum_left-v2[i];
    if(sum_left>0){
        v[i]=v[i]+v2[i];
        minsum=minsum+v2[i];
    }
    else {
        v[i]=v[i]+st-minsum;
        break;
    }
}

cout<<"YES"<<endl;
for(int i=0;i<d;i++){
    cout<<v[i]<<" ";
}


}





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