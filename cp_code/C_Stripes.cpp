// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    char a[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
        }
    }

    for(int j=0;j<8;j++){
        int count=0;
        for(int i=0;i<8;i++){
          if(a[i][j]=='B')count++;
        }
        if(count==8){cout<<'B'<<endl;break;}
    }


    for(int i=0;i<8;i++){
        int count=0;
        for(int j=0;j<8;j++){
          if(a[i][j]=='R')count++;
        }
        if(count==8){cout<<'R'<<endl;break;}
    }


}
    return 0;
}