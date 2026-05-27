#include<iostream>
#include <vector>
using namespace std;

void printVec(vector<int>&v){
   
         for(int j=0;j<v.size();j++) cout<<v[j]<<" ";
        cout<<endl;
    

}
int main(){
int N;
cin>>N;
     vector<int> v[N];
for(int i=0;i<N;i++){
    int n;
    cin>>n;
  for(int j=0;j<n;j++){
      int x;
      cin>>x;
      
 v[i].push_back(x);

 
}}
for(int i=0;i<N;i++){
printVec(v[i]);
    
}   
    
    

    return 0;
}