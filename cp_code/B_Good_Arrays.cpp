// Online C++ compiler to run C++ program online
#include <iostream>
// #include <string.h>
#include<cstdint>
#include<vector>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
int n;
cin>>n;
vector<long long> a(n); 
int count=0;
if (n==1) count++;
// else if{
//     int count1=0;
//     for(int i=0;i<n;i++){
// if(a[i]==1)count1++;
//     }
//     if(count1==n)count++;
// }
else if(n==2){int count1=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)count1++;

    }
    if(count1==2)count++;
}
else if(n==3){
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]==1) count1++;
        else if(a[i]==2)count2++;

}
if(count1==n) count++;
else if(count1==2 && count2==1) count++;
}

else{
    int count3=0;
    int count4=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)count3++;
        else if( (a[i]==3) || (a[i]==2))count4++;
      
    }
    cout<<count3<<endl<<count4<<endl; //
    if(count3==n)count++;
    else if(count3==n-1 && count4==1){count++;}
    count3=0;count4=0;
}
 

if(count>0)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}

    
    return 0;
}