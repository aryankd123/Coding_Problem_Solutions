#include <bits/stdc++.h>
using namespace std;
#define int long long



const int lowest = -1e6 ;
const int highest= 1e6 ;
int power(int x, unsigned int y, int p) 
{ 
    int res = 1;  
    x = x % p;
  
    if (x == 0) return 0;
 
    while (y > 0) 
    {  
        if (y & 1) 
            {res = (res*x) % p;} 
 
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 
} 




void solve(){
string s;
cin>>s;
map<char,
//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}