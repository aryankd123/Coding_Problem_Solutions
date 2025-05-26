// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=1;
    int ans=0;
   
    for(int i=0;i<n;i++){
       if(arr[i]==arr[i+1]) count++;
       else{if(count>ans){ans=count;}
       count=1;
    }
}
cout<<n-ans<<endl;

}
    return 0;
}