#include <iostream>
#include<string>
using namespace std;
void swap(string a,string b){
char temp=a[0];
a[0]=b[0];
b[0]=temp;
}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
char a[3],b[3];
cin>>a;
cin>>b;
swap(a,b);
cout<<a<<" "<<b<<endl;
}



    return 0;
}