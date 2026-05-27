// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include <cstdint>
//# include <bits/stdc++.h>
int max(int a ,int b){
    if (a>=b) return a;
    else return b;
}
 
using namespace std;
int main() {
int t;
cin>>t;
for(int j=0;j<t;j++){
int n,k;
cin>>n>>k;
int a[n][n];
for(int i=0;i<n;i++){
for(int p=0;p<n;p++){
    cin>>a[i][p];
}
}
int y=n/k;
int b[y][y];
for(int i=0;i<y;i++){
    for(int j=0;j<y;j++){
        b[i][j]=a[i*k][j*k];
        cout<<b[i][j]<<endl;
    }


}
    return 0;
}}