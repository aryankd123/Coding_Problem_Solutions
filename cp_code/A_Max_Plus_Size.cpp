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
   int n;
   cin>>n;
   int a[n];
   int max=0;
   int flag=0;
   int flag2=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>max){max=a[i];flag=i;}
   }
   if(n%2!=0){
    for(int i=0;i<n;i++){
    if((a[i]==max) && (i%2==0)){flag2++;}
   }}
   if(n%2==0) cout<<max+(n/2)<<endl;
   else if(flag2>0) cout<< max+n/2+1<<endl;
   else cout<< max+n/2<<endl;

    }

    return 0;
}
