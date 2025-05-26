#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include<cmath>
using namespace std;
int main(){
    int flag=0;
    for(int i=0;i<12;i++){
string s;
cin>>s;
if(s.size()==i+1)flag++;
    }
cout<<flag;


    return 0;
}
