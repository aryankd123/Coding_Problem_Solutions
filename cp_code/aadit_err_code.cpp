
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<cmath>
using namespace std;
int main(){
  long long t;
  cin >> t;
  while (t--){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0;i<n;i++){
      cin>>arr[i];
    }
    set<long long>uniqueElements(arr.begin(),arr.end());
    char b[n];
    bool all_identical=true; 
    for(long long i=1;i<n;i++){
      if(arr[i]!=arr[0]){
        all_identical = false;
        break;
      }
    }
    if(all_identical==true){
      cout<<"NO"<<endl;
    }
    else{
      if(uniqueElements.size()==2 && n==3){
        if(arr[0]!=arr[1]){
          b[2]='B';
          b[0]='R';
          b[1]='R';
        }
        else{
          b[0]='R';
          b[1]='B';
          b[2]='R';
        }
      }
      else if(uniqueElements.size()==2 && n>3){
        if(b[0]!=b[1]){
          b[n-1]='R';
          for(long long i=0;i<n-1;i++){
            b[i]='B';
          }
        }
        else{
          b[0]='R';
          for(long long i=1;i<n;i++){
            b[i]='B';
          }
        }
      }
      else{
        b[0]='R';
        for(long long i=1;i<n;i++){
          b[i]='B';
        }
      }
      cout<<"YES"<<endl;
      for(long long i=0;i<n;i++){
        cout<<b[i];
      }
      cout<<endl;
    }
  }
  return 0;
}