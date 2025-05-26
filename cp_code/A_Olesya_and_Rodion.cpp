// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
using namespace std;
int main(){
int n,t;
cin>>n>>t;

string s[n];
for(int i=0;i<n;i++)s[i]='0';
if(n==1 && t==2) cout<<'2';
else if (n>1 && t==2){s[0]='1';
for(int i=0;i<n;i++) cout<<s[i];
}

if(n==1 && t==3) cout<<'3';
else if (n>1 && t==3){s[0]='1';s[n-1]='2';
for(int i=0;i<n;i++) cout<<s[i];
}

if(n==2 && t==4)cout<<12;
else if (n!=2&& t==4){s[0]='1';s[n-1]='4';
for(int i=0;i<n;i++) cout<<s[i];
}

if(n==1 && t==5)cout<<5;
else if (n>1 && t==5){s[0]='1';
for(int i=0;i<n;i++) cout<<s[i];
}

if(n==1 && t==6) cout<< 6;
else if (n>1 && t==6){s[0]='1';s[n-1]='8';
for(int i=0;i<n;i++) cout<<s[i];
}



if(n==1 && t==8) cout<<8;
else if(n==2 && t==8) cout<<16;
else if(n==3 && t==8) cout<<104;
else if (n>3 &&t==8){s[0]='1';
for(int i=0;i<n;i++) cout<<s[i];
}

if(n==1&& t==7) cout<<7;
else if(n%6==2 && t==7){
    s[0]='1';s[n-1]='4';
    for(int i=0;i<n;i++) cout<<s[i];
}
else if(n%6==3 && t==7){
    s[0]='1';s[n-1]='5';
    for(int i=0;i<n;i++) cout<<s[i];
}
else if(n%6==4 && t==7){
    s[0]='1';s[n-1]='1';
    for(int i=0;i<n;i++) cout<<s[i];
}
else if(n%6==5 && t==7){
    s[0]='1';s[n-1]='3';
    for(int i=0;i<n;i++) cout<<s[i];
}
else if(n%6==0 && t==7){
    s[0]='1';s[n-1]='2';
    for(int i=0;i<n;i++) cout<<s[i];
}
else if(n%6==1 && t==7){
    s[0]='1';s[n-1]='6';
    for(int i=0;i<n;i++) cout<<s[i];
}

if(n==1 && t==9) cout<<9;
else if (t==9){s[0]='1';s[n-1]='8';
for(int i=0;i<n;i++) cout<<s[i];
}

if(n==1 && t==10)cout<<-1;
else if(n>1&& t==10){
    s[0]='1';
    for(int i=0;i<n;i++) cout<<s[i];
}
    return 0;
}