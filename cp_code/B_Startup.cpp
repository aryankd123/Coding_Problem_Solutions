#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
#include <unordered_map>
#include<map>
#include<unordered_set>
#include <set>
#include <iomanip>
using namespace std;
typedef long long int lli;
void solve(){

int n,k;
cin>>n>>k;


int* arr = new int[k];
fill(arr, arr + k, 0);
for(int i=0;i<k;i++){
int x,y;
cin>>x>>y;
arr[x]=arr[x]+y;
}
sort(arr,arr+k);
int sum=0;
for(int i=0;i<n;i++){
sum+=arr[k-i];
}
cout<<sum<<endl;
delete[] arr;

// map<int,int> mp;

// for(int i=0;i<k;i++){
// int x,y;
//int x,y;
// mp[x]=mp[x]+y;

// }
// auto it=--mp.end();
// for(int i=0;i<n;)







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