// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
 int t; 
 cin>>t;
 while (t--){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int st=a[0];
     for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
        cout<<a[i]<<" ";
     }
     cout<<st<<endl;
     
 }
    return 0;
}