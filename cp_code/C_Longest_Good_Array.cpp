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
   long long l,r;
   cin>>l>>r;
   int no=r-l;
   // int ans=0;
   int j=1;
   while(((j*(j+1))/2)<=no) {j++;}
   cout<<j<<endl;
    }

    return 0;
}
