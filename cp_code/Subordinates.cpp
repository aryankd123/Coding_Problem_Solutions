#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
TreeNode* left;
TreeNode* right;
int val;
TreeNode(int x){
    val=x;
    left=nullptr;
    right=nullptr;

}
};
int dfs(vector<vector<int>>& adj , vector<int>&sub,int node){

if(adj[node].size()==0){sub[node]=0;return sub[node]+1;}

int sum=0;
for(auto neigh:adj[node]){
sum+=dfs(adj,sub,neigh);
}
sub[node]=sum;
return sub[node]+1;
}

void solve() {
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        adj[x].push_back(i);

    }
    vector<int>sub(n+1,0);
dfs(adj,sub,1);

for(int i=1;i<=n;i++){
cout<<sub[i]<<" ";
}


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