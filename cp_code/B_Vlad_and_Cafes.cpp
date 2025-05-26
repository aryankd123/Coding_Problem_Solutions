// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
using namespace std;
const int no=2e5+10;
int main(){
    
int n;
cin>>n;
int arr[no]={0};
int hash[no]={0};
int ans=0;
for(int i=0;i<n;i++ ){
    cin>>arr[i];

}
for(int j=n-1;j>=0;j--){
    hash[arr[j]]++;
    if (hash[arr[j]]==1)ans=arr[j];
}
cout<<ans;
    return 0;
}