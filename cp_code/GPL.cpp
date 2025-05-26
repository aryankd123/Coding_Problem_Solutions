// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;
int main() {
 int64_t t; 
 cin>>t;
 while (t--){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int64_t ans=0;
for(int64_t i=n-1;i>=0;i--){
    int64_t a=s[i]-'0';
  ans+=  a*pow(2,n-1-i);
}
      cout<<ans<<endl;
     
 }
    return 0;
}