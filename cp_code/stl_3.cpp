#include<iostream>
#include <vector>
using namespace std;
void printVec(vector <pair<int,int> > v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second;

    }
    cout<<endl;
}
int main(){
int n;
cin>>n;
   vector <pair<int,int> >v1;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
 v1.push_back(make_pair(x,y));
}
printVec(v1);
    return 0;
}