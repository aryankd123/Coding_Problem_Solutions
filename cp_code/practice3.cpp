// Online C++ compiler to run C++ program online
#include <iostream>
// # include <bits/stdc++.h>
using namespace std;
int main() {
 
int x=8;
cout<<&x<<endl;
int* p_x= &x;
cout<<p_x<<endl;
cout<<*p_x<<endl;
*p_x=10;
cout<<x<<endl;
p_x++;
cout<<p_x<<endl;
*p_x=100;
int j=*p_x;
cout<<j;

     

    return 0;
}