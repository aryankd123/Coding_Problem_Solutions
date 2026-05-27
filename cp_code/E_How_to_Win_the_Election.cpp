#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include<cmath>
using namespace std;

int main(){
  int n,m,k;
  cin>>n>>m>>k;
  vector<int> v;
  int sum=0;
  for(int i=0;i<n;i++){int x; cin>>x;v.push_back(x);sum+=v[i];}
  sort(v.begin(),v.end());
  int vote_l=k-sum;
  
   for(int i=0;i<n;i++){int hash[n]; for(int j=0;j<n;j++){if(v[j]>v[i])hash[i]=v[j]-v[i];}
   int flag=0;
   for(int k=0;k<=vote_l;k++){for(int j=n-1;j>=0;j--){if(v[i]+k>=hash[j]){flag=j+1;break;}}
   if(n-1-flag<m)cout<<n-1-flag;break;
  }
   
   }
    return 0;
}
