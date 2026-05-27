#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    int count=0;
    if (a%2!=0) count++;
    else if(a==0 && b%2!=0) count++;

if(count>0)cout<<"NO"<<endl;
else cout<<"YES"<<endl;

    }


    return 0;
}
