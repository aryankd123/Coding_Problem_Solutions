#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,k;
cin>>n>>k;


vector<int>v;
for(int i=1;i*i<=n;i++){
    if(n%i==0){
        if(n/i!=i){v.push_back(i);v.push_back(n/i);}
        else if(n/i==i){v.push_back(i);}
    }
}
sort(v.begin(),v.end());
if(k<=v.size()){
cout<<v[k-1];}
else cout<<-1;
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}