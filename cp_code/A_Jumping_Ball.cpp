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
char a[n+1];
a[n]='0';
int count=0;  //
int count2=0;
int flag=0;

for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++){
    if(a[i]=='<'&& flag!=1){  //
        count++;
    }
if((a[i]=='<' && a[i+1]=='>' )||(a[i]=='>' && a[i+1]=='<' )) flag=1;
if(a[i]=='>'){
    if(a[i+1]!='<')count2++;
    else if(a[i+1]=='<')count2=0;
}
}
// cout<<count<<endl;
// cout<<count2<<endl;

cout<<count+count2;
    return 0;
}