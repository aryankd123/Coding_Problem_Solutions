#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
#include <unordered_map>
using namespace std;
typedef long long int lli;
void solve(){
int n;
cin>>n;
vector<int> v;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);

}

int min=100000;
for(int i=0;i<n;i++){
int max=0;
    for(int j=i+1;j<n;j++){
        if(v[j]>v[i])max++;
    }
    if((max+i)<min)min=max+i;
}
cout<<min<<endl;


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