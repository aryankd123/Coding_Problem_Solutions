// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;

int fact(int no){
    int64_t ans=1;
    for(int64_t i=1;i<=no;i++){
ans=ans*i;
    }
    if (no==0) return 1;
    else return ans;
    }
    

int64_t coeff(int n,int r){
 return (fact(n)/(fact(r)*fact(n-r)) ) ;
}
int main() {
 int64_t t; 
 cin>>t;
 while (t--){
    int64_t n;
    cin>>n;
    if(n==0)cout<<1<<endl;
   else{
    for(int64_t i=0;i<n;i++){
        for(int64_t j=0;j<=i;j++){
            cout<<coeff(i,j)<<" ";
        }
        cout<<endl;
    }}
   
 }
    return 0;
}