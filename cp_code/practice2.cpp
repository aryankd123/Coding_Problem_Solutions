// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
const int N=1e5+10;
int arr[N];
void function1(){
    arr[0]=8;
}

// whenever we want to pass an array in a function we would have to pass the array globally and we would have to 
// note - we cannot return two nos. through a function 
void swap(int a,int b){   //here we are passing the value
    int temp=a;
    a=b;
    b=temp;
}
void swap1(int &a,int &b){     //this is the method of references //here we are passing the two nos by reference
    int temp=a;
    a=b;
    b=temp;
}
void func(string s){
    s="";
}
void func1(string &s){
    s="";
}




//note- arrays are always passed by reference
// note- we are able to skip the size for the first dimension only not for the second one 
void function(int a[][9]){
    a[0][0]=5;
}

// the following are the built in functions of c++
//max()
//min()
//swap()

int main() {
    arr[0]=9;
    cout<<arr[0];
    func();
    cout<<arr[0];
// int a[10];
// int a[10]=13;
// cout<<a[10];
/*




int a,b;
cin>>a>>b;
swap(a,b);  // here we are passing by value so it will not swap the two nos.
cout<<a<<" "<<b<<endl;
swap1(a,b);
cout<<a<<" "<<b<<endl;
string s="baba";
func(s);
cout<<s<<endl;
func1(s);
cout<<"output:"<<s<<endl;


*/







    return 0;
}