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
   int n,q;
   cin>>n>>q;
   int a[n];
   for(int i=0;i<n;i++){cin>>a[i];}



   long long  b[q];
   for(int i=0;i<q;i++){cin>>b[i];}

int flag=(n*(n-1))/2;
   for(int i=0;i<q;i++){
   if(b[i]>flag)cout<<0<<" ";


   }


cout<<endl;

}
 
   
    return 0;
}
