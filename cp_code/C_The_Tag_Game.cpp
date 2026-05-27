#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;
 


void dfs(int node,vector<vector<int>>& adj,vector<int>& dis,int distance){
dis[node]=distance;
for(auto neigh:adj[node]){
    if(dis[neigh]==-1){
        dfs(neigh,adj,dis,distance+1);

    }
}
}

void solve(){
int n;
int x;
cin>>n>>x;
vector<int> dis1(n+1,-1);
vector<int> dis2(n+1,-1);


vector<vector<int>>adj(n+1);

for(int i=1;i<n;i++){
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);


}
dfs(1,adj,dis1,0);
dfs(x,adj,dis2,0);

int ans=INT_MIN;
int final;
for(int i=1;i<=n;i++){
if(dis2[i]<dis1[i] && dis1[i]>ans) {ans=max(ans,dis1[i]);final=max(dis1[i],dis2[i]);}
}

cout<<2*final;

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
//precompute()
//factorial();
//inverses();
// int t;
// cin>>t;
// while (t--){
solve();

    return 0;
}