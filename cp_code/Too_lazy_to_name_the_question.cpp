// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;

int fact(int no){
    int ans=1;
    for(int i=1;i<=no;i++){
ans=ans*i;
    }
    if (no==0) return 1;
    else return ans;
    }
    

int coeff(int n,int r){
 return (fact(n)/(fact(r)*fact(n-r)) ) ;
}
int main() {
 int t; 
 cin>>t;
 while (t--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<coeff(i,j)<<" ";
        }
        cout<<endl;
    }
   
 }
    return 0;
}