#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include<cmath>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  int b[n];
  int max1,max2;
  for(int i=0;i<n;i++){cin>>a[i];if(i==0)max1=a[i];else if(a[i]>max1)max1=a[i];}
   for(int i=0;i<n;i++){cin>>b[i];if(i==0)max2=b[i];else if(b[i]>max2)max2=b[i];}
   cout<<max1+max2;
    return 0;
}
