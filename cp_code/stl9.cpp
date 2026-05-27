#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<unordered_map>
#include<cmath>
using namespace std;
typedef long long int lli;
void solve(){


unordered_map<int,string> m;
m[1]="abc";  //O(1). where n is the size of our map
m[6]="bcd";
m[3]="xyz";
for(auto it:m){ //here it is the value which is a pair
    cout<<(it).first <<" "<<(it).second;
}
//note- sets,vectors ,etc ka hash function defined nahi hota hai

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