#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(pair<int,int>p1,pair<int,int> p2){
    if(p1.second<p2.second) return 1;
    else return 0;
}
void solve(){
int n,k;
cin>>n>>k;

vector <pair<int,int>> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back({i,x});
}

sort(v.begin(),v.end(),cmp);
int count=0;
int sum_days=0;
vector<int> ans;
// for(int i=0;i<v.size();i++){cout<<v[i].first<<" "<<v[i].second<<'\n';}
// cout<<'\n';
for(int i=0;i<v.size();i++){
if(sum_days+v[i].second<=k){sum_days+=v[i].second;ans.push_back(v[i].first+1);}
else break;
}
cout<<ans.size()<<'\n';
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}