// Online C++ compiler to run C++ program online
#include <iostream>
//#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int64_t n,f,a,b;
    cin>>n>>f>>a>>b;
    int64_t arr[n];
    int64_t count=0;
    int64_t initial=0;
    
    for(int i=0;i<n;i++){
    cin>>arr[i];}
    
    
        for(int i=0;i<n;i++){
        if (((arr[i]-initial)*a)>b) count+=b;
        else(count+=(arr[i]-initial)*a);
            initial=arr[i];
            //cout<<count<<" ";
            
        }
    if(count<f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    
    
    
    
    
}
    return 0;
}