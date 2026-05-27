// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
using namespace std;

int main(){
int n;
cin>>n;
int t;
cin>>t;
int count =0;

int ans=-1;
for(int i=1;pow(n,i)<=t;i++){
    if(pow(n,i)==t) ans=i-1;
}

if(ans==-1) cout<<"NO";
else cout<<"YES"<<endl<<ans;
    return 0;
}