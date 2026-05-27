// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
int main() {
int t;
cin>>t;
while (t--){
    int64_t l,r,a;
    cin>>l>>r>>a;
    int64_t sum=0;
    int64_t sum1=0;
    int64_t temp_prev=0;
  /* for(int i=l;i<=r;i++){
int low= i/a;
int mod=i%a;
int temp=(low+mod);
if(temp>sum){sum=temp;}
*/
int64_t i=r;
int64_t count=0;
if((l<=(r-(r%a+1)))&&((r-(r%a+1))<=r)){

for (int j=r;j>=r-(r%a+1);j--){
int64_t low= j/a;
int64_t mod=j%a;
sum=(low+mod);
if(sum>=count)count=sum;
}
//}
cout<<count<<endl;


}




else{
while (i>=l){
int64_t low= i/a;
int64_t mod=i%a;
sum1=(low+mod);
if(sum1<temp_prev) {break;}
temp_prev=sum1;
i--;}
cout<<temp_prev<<endl;
}
}
    return 0;
}