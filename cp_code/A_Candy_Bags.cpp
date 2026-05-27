// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include <string.h>
#include<cstdint>
#include <cmath>
// #include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int count1 =1;
int count2 = n*n;
for(int i=0;i<n;i++){
    for(int j=count1;j<=count1+n/2-1;j++){
        cout<<j<<" ";
    }
    count1=count1+n;


    for(int j=count2;j>=count2-n/2+1;j--){
        cout<<j<<" ";
    }
    count2=count2-n;

cout<<endl;

}

    return 0;
}