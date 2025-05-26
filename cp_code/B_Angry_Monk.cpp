// Online C++ compiler to run C++ program online
#include <iostream>
//# include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
for (int i=0;i<t;i++){
    int n,k;
    cin>>n>>k;
    int a[k];
    for(int i=0;i<k;i++) cin>>a[i];
    sort(a,a+k);
    int sum=0;

for(int i=0;i<k-1;i++){
    sum=sum+(2*(a[i])-1);

}

cout<<sum<<endl;

}

    return 0;
}