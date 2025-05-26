// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
for(int i=1;i<=n;i++){
    if(i==1) cout<<"I hate";
    else if(i%2!=0) cout<<" that I hate";
    else if(i%2==0)cout<<" that I love";
}cout<<" it"<<endl;
    
    return 0;
}