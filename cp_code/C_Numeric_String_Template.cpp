// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int m;
cin>>m;
while(m--){
int count=0;
string s;
  cin>>s;
if(n!=s.size()) count=1; //
else{
  
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
  //int no=a[i];
  if((s[j]!=s[i] && a[j]==a[i]) ||( a[j]!=a[i] && s[j]==s[i] )) {count=1;break;}
        }
    }

}

if(count==1) cout<<"NO"<<endl;
else cout<<"YES"<<endl;

}
}

    
    return 0;
}