// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int main() {
int a[4];
for(int i=0;i<4;i++){
    cin>>a[i];
}
sort(a,a+4);
int seg=0;
int tri=0;
if((a[2]+a[1])==a[3]) {seg++;}
if((a[2]+a[1])>a[3]) {tri++;}
if((a[1]+a[0])==a[2]) {seg++;}
if((a[0]+a[1])>a[2]) {tri++;}

if(tri>0) cout<<"TRIANGLE";
else if (seg>0) cout<<"SEGMENT";
else cout<<"IMPOSSIBLE";



    return 0;
}