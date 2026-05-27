#include<iostream>
#include <string.h>
using namespace std;
int main(){
    /*
string str1,str2;
getline(cin,str1);  //ends with the new line 
getline (cin,str2);  
cout<<str1;
// note - the getline function does not ignore the newline or the space so we must use the cin.ignore() for this
*/



/*
int t;
cin>>t;
cin.ignore();
while(t--){
    string s;
    getline (cin,s);
    cout<<s<<endl;

}
*/

string str;
cin>>str;
string str_rev;
for(int j=str.size()-1;j>=0;j--){
  //  str_rev=str_rev+str[j];     // we must avoid this as we are adding a character to a string 
str_rev.push_back(str[j]);  // puts the value at the last of the str_rev

}

// note- when working with very large nos. use strings instead

cout<<str_rev;





    return 0;
}