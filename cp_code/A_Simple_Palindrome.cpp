#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
vector<string> v(5);
char ch0='a';
char ch1='e';
char ch2='i';
char ch3='o';
char ch4='u';

v[0]=string(n/5,ch0);
v[1]=string(n/5,ch1);
v[2]=string(n/5,ch2);
v[3]=string(n/5,ch3);
v[4]=string(n/5,ch4);

if(n%5==1)v[0].push_back('a');
else if(n%5==2){v[0].push_back('a');v[1].push_back('e');}
else if(n%5==3){v[0].push_back('a');v[1].push_back('e');v[2].push_back('i');}
else if(n%5==4){v[0].push_back('a');v[1].push_back('e');v[2].push_back('i');v[3].push_back('o');}

for(int i=0;i<5;i++){
    cout<<v[i];
}

cout<<endl;
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