// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int main() {
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
int count=0;
int flag=-1;
for(int i=0;i<n;i++){


if(a[i]<=8) {count+=a[i];
if(count>=k){flag=i+1;break;}
}

if(a[i]>8) {count+=8;
if(count>=k){flag=i+1;break;}
a[i+1]=a[i+1]+a[i]-8;
}



}





cout<<flag<<endl;
    return 0;
}