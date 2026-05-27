// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
const int a= 2e5;
int arr[a];
// # include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
int n;
cin>>n;
for(int i=0;i<n;i++)arr[i]=0;
int count=0;
bool a1=0;
int pos;
for(int i=0;i<n;i++){
    cin>>pos;
    pos--;
    if(i==0) arr[pos]=1;
    else if(pos==0 && arr[pos+1]==1){arr[pos]=1;}
    else if(pos==n-1 && arr[pos-1]==1) {arr[pos]=1;}
    else if(pos!=0 && pos!=n-1 && (arr[pos-1]==1 || arr[pos+1]==1)){arr[pos]=1;}
    else {a1=1; break;}
}
if(a1==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

    }
    return 0;
}