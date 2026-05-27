// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
//#include <bits/stdc++.h>
using namespace std;
int main(){
long long n,m,a;
cin>>n>>m>>a;
long long small=0;
long long large=0;
long long nx,ny=0;
if(n<=m) {small=n;large=m;}
else {small=m;large=n;}


if(small%a==0) { nx=small/a;
if(large %a==0) ny=large/a;
else if(large %a!=0) ny=large/a+1;

}
else if(small%a!=0) {
     nx=small/a+1;
    if(large%a==0) ny=large/a;
    else if(large%a!=0) ny=large/a+1;
}
cout<<nx*ny<<endl;
    return 0;
}