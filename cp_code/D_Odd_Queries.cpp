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
int q;
cin>>n;
cin>>q;
vector <int> v,v2;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
  
    v.push_back(x);
    if(x%2!=0) {v2.push_back(1);}
    else v2.push_back(0);


 }
for(int i=1;i<n;i++) {v2[i]=v2[i-1]+v2[i];}

for(int j=0;j<q;j++){

int l,r,k;
cin>>l>>r>>k;
l=l-1;
r=r-1;

int ans=0;
if(l!=0){
    if(k%2!=0) {
       ans=v2[n-1]+(r-l+1)-v2[r]+v2[l-1];
             }
     else       {
       ans=v2[n-1]-v2[r]+v2[l-1];
                 }
                 }
if (l==0){
                        if(k%2!=0) {
       ans=v2[n-1]+(r-l+1)-v2[r];
             }
     else       {
       ans=v2[n-1]-v2[r];
                 }
                 }
   //int no1=0;

  if (ans%2==0 ) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;


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