// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    float x;
    long long y;
    cin>>x>>y;
    int count=0;
    if(x>y) {count++;}
    else if(x==y) {count++;}
    else if(x<y){
        while (x<y){
            x=((x*3)/2);
            long long a=floor(x);
        //cout<<x<<" "<<a<<endl;
        if(a==x){count++;}
        }
        
    }
    if(count>0){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}
}
    return 0;
}