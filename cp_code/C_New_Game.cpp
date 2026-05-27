#include<iostream>

#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
using namespace std;
typedef long long int lli;
void solve(){

int n,k;
cin>>n>>k;
vector<int> v;
for (int i=0;i<n;i++){
    int x;
    cin>>x;
  v.push_back(x);
}
sort(v.begin(),v.end());
vector<int> v2;
int x=1;
for (int i=0;i<n-1;i++){
    
    
    if(v[i]==v[i+1]){x++;}
    else {v2.push_back(x) ;x=1;}

}
v2.push_back(x);
//if(v[n-1]!=v[n-2])v2.push_back(1);

//for (int k=0;k<v2.size();k++) cout<<v2[k];
//cout<<endl;
int max=0;
int j=0;
while(j+k-1<=v2.size()-1){
    int sum=0;
    for(int u=j;u<=j+k-1;u++) sum+=v2[u];
    if(sum>max)max=sum;
    j++;
}
cout<<max<<endl;
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