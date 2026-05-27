// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
const int no= 3e6+10;
int arr[no];
//int hash[no];
// # include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int hash[n+5];
for(int j=0;j<n+5;j++) {hash[j]=0;}

int ans=0;
//int arr[2*n+5];
for(int i=1;i<=2*n;i++){
    int count=0;
    cin>>arr[i];
    hash[arr[i]]++;
    for(int j=1;j<=n;j++){ if(hash[j]==1)count++;}
if(count>=ans)ans=count;

}
cout<<ans<<endl;
    return 0;
}