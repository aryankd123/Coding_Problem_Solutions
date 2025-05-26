#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<n;i++) {if(s[i]=='0')flag++;}
      int count=0;
      int a=sqrt(n);
      if(a==sqrt(n)) {if(((a-2)*(a-2))==flag)count++;}
      if(count>0)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }

    return 0;
}
