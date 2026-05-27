#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
    int n,k;
    cin>>n>>k;

map<int,int>mp;
int l=0;
int unique=0;
int res=0;
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);

}
for(int r=0;r<n;r++){
    mp[v[r]]++;
    if(mp[v[r]]==1)unique++;
while(unique>k){mp[v[l]]--;
    if(mp[v[l]]==0)unique--;
    l++;

    }
res+=r-l+1;
}

cout<<res;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


solve();

    return 0;
}