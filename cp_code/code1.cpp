// Online C++ compiler to run C++ program online
#include <iostream>
# include <cmath>

// # include <bits/stdc++.h>
using namespace std;
 const int j= 1e7;   //here the constant integer must be used and it must be less than 10 power 7 for global and less than 10 power 5 for local 
int a1[j];   

int main() {

// int n=1e7;
// int a[n];
// a[n-1]=10;
// cout<<a[n-1];     // this will create an error
a1[j-1]=10;
cout<<a1[j-1];    // this will not create an error
//here this will create an error as we are not allowed to declare an array of size greater than than the order of 1e5 locally

    return 0; //note -in old compilers we had to use return 0 but new compilers return 0 is taken as by default
} 