#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 
#include<cmath>
using namespace std;
void vec_out(vector<int> v){               //note-this passes a copy of the vector v so its time complexity(time complexity of making a copy is O(n))
    cout<<v.size()<<endl;    //O(1)
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
     v.push_back(100);    // does not work as a copy of the v is sent here 
}


void print_vec(vector<int> &v){               //note-this passes a true reference of the variable v
    cout<<v.size()<<endl;    //O(1)
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<endl;
    v.push_back(100);
}


int main(){
int a[10];
vector <int> v;
vector<int> v2(5);  // here we have declared a vector with some initial size and initial elements 0 then also the size of the vector is dynamic therefore we can still add new elements to the back
vector<pair<int,int>> v3;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x); //adds a value at the end of a vector //O(1)
    
}
vec_out(v);
print_vec(v);
vec_out(v);
v.pop_back();  //removes the last value of the vector
vec_out(v);


vec_out(v2);
v2.push_back(250);
vec_out(v2);
v2.pop_back();
v2.pop_back();
vec_out(v2);

vector<int>v5=v;  // here a copy is made and thus its complexity is O(n)
vector<int>&v6=v;
v6.push_back(999);
vec_out(v6);
vec_out(v);




return 0;

}