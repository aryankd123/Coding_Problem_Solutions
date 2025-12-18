#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;
 

 

 
 
void dfs_maker(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& res) {
vis[node] = 1;
res.push_back(node);
for (int neighbor : adj[node]) {
if (!vis[neighbor]) {
dfs_maker(neighbor, adj, vis, res);
}
}
}
vector<int> dfs(int n, vector<vector<int>>& adj) {
vector<int> vis(n, 0), res;
for (int i = 0; i < n; ++i) {
if (!vis[i]) {
dfs_maker(i, adj, vis, res);
}
}
return res;
}
class dsu{
vector<int>rank,parent,size;
public:
dsu(int n){
rank.resize(n+1,0);
parent.resize(n+1);
size.resize(n + 1);
for(int i=0;i<=n;i++){
parent[i]=i;
size[i]=1;
}
}
int findUparent(int node){
if(node==parent[node])return node;
return parent[node]=findUparent(parent[node]);
}
void unionByRank(int u,int v){
int ul_u=findUparent(u);
int ul_v=findUparent(v);
if(ul_u==ul_v)return ;
if(rank[ul_u]<rank[ul_v]){
parent[ul_u]=ul_v;
}
else if(rank[ul_v]<rank[ul_u]){
parent[ul_v]=ul_u;
}
else {
parent[ul_v] = ul_u;
rank[ul_u]++;
}
}
void unionBySize(int u,int v){
int ul_u=findUparent(u);
int ul_v=findUparent(v);
if(ul_u==ul_v)return ;
if(size[ul_u]<size[ul_v]){
 parent[ul_u]=ul_v;
size[ul_v] += size[ul_u];
}
else {
parent[ul_v] = ul_u;
size[ul_u] += size[ul_v];
}
}
};
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
map<int,vector<int>>mp;
for(int i=0;i<n;i++){
mp[v[i]].push_back(i+1);

}
vector<int>dp(n+1,0);
for(int i=1;i<=n;i++){
    dp[i]=dp[i-1];

    int a=v[i-1];
    auto it=lower_bound(mp[a].begin(),mp[a].end(),i);
    if(it-mp[a].begin()+1>=a){
        dp[i]=max(dp[i],dp[mp[a][it-mp[a].begin()-a+1]-1]+v[i-1]);
    }
}
cout<<dp[n]<<"\n";



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
//factorial();
//inverses();
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}