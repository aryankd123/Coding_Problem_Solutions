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
int count=0; 
if(n/100==1){
    int rem=n%100;
    for(int i=2;i<=9;i++){
        if(rem==i) count++;
    }

}
else if(n/1000==1){
    int rem=n%1000;
    for(int i=10;i<=99;i++){
        if(rem==i) count++;
    }

}
else if(n/10000==1){
    int rem=n%10000;
    for(int i=100;i<=999;i++){
        if(rem==i) count++;
    }

}

if(count>0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;



    }
    return 0;
}