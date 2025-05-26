// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;
int main() {
 int t; 
 cin>>t;
 while (t--){
    int n;
    cin>>n;
    int a[n];
    int product=1;

    for(int i=0;i<n;i++){cin>>a[i];product=((a[i]%10)*product)%10;}
if(product==2||product==3||product==5) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

 }
    return 0;
}