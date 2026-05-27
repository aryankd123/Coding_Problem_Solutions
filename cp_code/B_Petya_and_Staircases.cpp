#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(){

int n,m;
cin>>n>>m;
if(m==0){cout<<"YES";return 0;}
vector<int> v;
for(int i=0;i<m;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
int a,b,c;
// a=-1;
// b=-1;
// c=-1;
if(v[0]==1 || v[v.size()-1]==n){cout<<"NO";return 0;}
else if(m>=3){for(int i=0;i<v.size()-2;i++){
a=v[i];
b=v[i+1];
c=v[i+2];
if(b-a==1 && c-b==1){cout<<"NO";return 0;}

}

}
cout<<"YES";return 0;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}