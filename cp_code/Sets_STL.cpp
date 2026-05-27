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
using namespace std;
typedef long long int lli;
set <int> s1;
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n;
cin>>n;
while(n--){
    int x,y;
cin>>x>>y;

if(x==3){
auto it=s1.find(y);
if(it!=s1.end()){cout<<"Yes"<<endl;s1.erase(*it);}
else cout<<"No"<<endl;
}
else {s1.insert(y);}
}
    return 0;
}