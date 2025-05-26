// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
if (a[0]%2==0 || a[n-1]%2==0) cout<<"NO"<<endl;
else if(n%2!=0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    return 0;
}