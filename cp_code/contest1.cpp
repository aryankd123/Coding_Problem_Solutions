// Online C++ compiler to run C++ program online
#include <iostream>
// # include <bits/stdc++.h>
using namespace std;
int main() {
 int t; 
 cin>>t;
 while (t--){
     int x,y,k;
     cin>>x>>y>>k;
  int count=k/2;
     if(k%2==0) {

        for(int i=-count;i<=count;i++){
            if(i!=0) cout<<x+i<<" "<<y+i<<endl;
        }
     }
          else if(k%2!=0) {

        for(int i=-count;i<=count;i++){
            cout<<x+i<<" "<<y+i<<endl;
        }
     }


     
 }
    return 0;
}