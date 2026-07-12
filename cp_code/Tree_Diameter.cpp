#include <bits/stdc++.h>
using namespace std;


int dfs(int node,int parent,vector<vector<int>>& adj,int & ans){
int first_max=0;
int sec_max=0;
for(auto child:adj[node]){
    if(child==parent)continue;
    int flag =dfs(child,node,adj,ans);
    if(flag>= first_max){sec_max=first_max;first_max=flag;}
    else if(flag>=sec_max)sec_max=flag;

}
ans=max(ans,first_max+sec_max+1);
return max(first_max,sec_max)+1;



}
void solve() {
  int n;
  cin>>n;
  vector<vector<int>>adj(n+1);
  int ans=0;

for(int i=0;i<n-1;i++){
int x,y;
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
  } 

  ans=max(ans,dfs(1,0,adj,ans));
  
cout<<ans-1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}