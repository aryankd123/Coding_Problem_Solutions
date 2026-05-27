#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
  long long n,k;
  cin>>n>>k;
  


int rem=0;

  if(k==1)cout<<n<<endl;
  else {
    
while(n>0){
rem+=n%k;
n=n/k;

}
cout<< rem<<endl;
  
  }}
    return 0;
}
