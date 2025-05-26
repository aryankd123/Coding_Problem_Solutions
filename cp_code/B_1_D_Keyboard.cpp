#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include<cmath>
using namespace std;

int main(){
  int hash[26];
  for(int i=0;i<26;i++) hash[i]=0;
  char s[26];
  for(int i=0;i<26;i++) {cin>>s[i];hash[s[i]-'A']=i;}
  int sum=0;
  //for(int i=0;i<26;i++) cout<<hash[i]<<" ";
 for(int i=0;i<25;i++) sum+=abs(hash[i]-hash[i+1]);
cout<<sum;
    return 0;
}
