// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int64_t ans(int64_t x,int64_t n){
int64_t a=n%4;
int64_t start=n-a+1;
int64_t sum=x;
for(int64_t i=start;i<=n;i++){
    if(sum%2==0) sum=sum-i;
    else sum=sum+i;
}
return sum;
}
int main() {
int t;
cin>>t;
while (t--){
int64_t x,n;
cin>>x>>n;
int64_t ans1=ans(x,n);
cout<<ans1<<endl;

}
    return 0;
}