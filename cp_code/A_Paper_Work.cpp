// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
const int m=102;
 
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int hash[m]={0};
    int count =0;
    int ans_count=0;
    for(int i=0;i<n;i++){
        int mark=0;
        cin>>arr[i];
        if(arr[i]<0) {count++;mark++;}
        if((count!=1&& (count-1)%2==0 && mark>0 && i!=n-1))  {hash[i-1]=1;ans_count++;}
        
        else if(i==n-1 && (count-1)%2==0 && count!=1&& mark>0 && n!=1) {hash[i-1]=1;hash[i]=1;ans_count+=2;}
        else if(i==n-1 && n==1){hash[i]=1;ans_count++;
        }
        else if(i==n-1) {hash[i]=1;ans_count++;}
    }
    cout<<ans_count<<endl;
    int flag_store=0;
    for(int i=0;i<102;i++) {if(hash[i]==1 && flag_store==0){cout<<i-flag_store+1<<" ";flag_store=i;}
    else if(hash[i]==1) {cout<<i-flag_store<<" ";flag_store=i;}}
    return 0;
}