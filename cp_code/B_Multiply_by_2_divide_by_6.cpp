// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int main() {
int t;
cin>>t;
while (t--){

int n;
    cin>>n;
    int count=0;
    while(n>1){
        if(n%6==0){
            n=n/6;
            count++;
        }

        else {
            n=n*2;count++;
            if(n%6!=0){cout<<-1<<endl;break;}
        }
    }
    if(n==1) cout<<count<<endl;

}
    return 0;
}