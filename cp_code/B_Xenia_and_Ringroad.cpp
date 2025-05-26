// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include <string.h>
#include<cstdint>
#include <cmath>
// #include <bits/stdc++.h>
using namespace std;
const int no=2e5;
int a[no];
int main() {

long long n,m;

cin>>n>>m;
for(int i=0;i<m;i++){
    cin>>a[i];
}
long long count=0;
long long record=0;
for(int i=0;i<m;i++){
    if(i==0){count+=a[i];record=a[i];}
    else if(a[i]>record){
        count+=(a[i]-record);
        record=a[i];

    }
    else if(a[i]<record){count+=a[i]+n-record; record=a[i];}
}
cout<<count-1;
    return 0;
}