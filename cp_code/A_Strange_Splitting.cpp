#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include<cmath>
using namespace std;
typedef long long ll;
void solve(){
int n;
cin>>n;
vector<int> v;

for(int i=0;i<n;i++ ){
    int x;
    cin>>x;
    v.push_back(x);

}

int flag=1;
int flag2=0;
for(int i=0;i<n-1;i++ ){
if(v[i]==v[i+1]) flag++;
if(v[i]!=v[i+1]) flag2=i+1;
}
if(n==flag){
    cout<<"NO"<<endl;

}
else if(flag==2 && n==3) cout<<"YES"<<endl<<"RBR"<<endl;
else {
    cout<<"YES"<<endl;
    if(flag2!=1){
    for(int i=0;i<n;i++){
        if(i==0 || i>=flag2)cout<<"R";
        else cout<<"B";
    }
    cout<<endl;}

if(flag2==1){
    for(int i=0;i<n;i++){
        if(i==0 || i>=flag2+1)cout<<"R";
        else cout<<"B";
    }
    cout<<endl;}

}


} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}