#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
int n,m;
cin>>n>>m;
string last_move;
for(int i=0;n>0&&m>0;i++){
    if(i%2==0) last_move="Akshat";
    else last_move="Malvika";
    n--;
    m--;
}

cout<<last_move;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
solve();

    return 0;
}