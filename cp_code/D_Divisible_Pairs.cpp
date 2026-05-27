#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *l, TreeNode *r) : val(x), left(l), right(r) {}
};

vector<int> bfs(vector<vector<int>> &adj) {
    queue<int> q;
    vector<int> bfs;
    vector<int> vis(adj.size(),0);
    q.push(0);
    vis[0]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it: adj[node]){
            if(!vis[it]) {
                q.push(it);
                vis[it]=1;
            }
        }
    }
    return bfs;
}

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

int mod(int a,int b){
    if(a>=0 || a%b ==0 )return a%b;
    else return b+(a%b);
}

void solve(){
    int n,x,y;
    cin>>n>>x>>y;

    int ans=0;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> v1,v2,v3;

    map<int,vector<int>> mp1;
    map<int, map<int, vector<int>>> mp2;

    for(int i=0;i<n;i++){
        v1.push_back(mod(v[i],x));
        mp1[mod(v[i],x)].push_back(i);
        v3.push_back(mod(v[i],y));
        v2.push_back(mod(-v[i],x));
        mp2[mod(-v[i],x)][v3[i]].push_back(i);
    }

    for(auto it: mp1){
        vector<int> flag=it.second;
        
        if(mp2.find(it.first)!=mp2.end()){
            for(int idx1 : flag){
                int val = v3[idx1];
                if(mp2[it.first].find(val)!=mp2[it.first].end()){
                    auto &vec = mp2[it.first][val];
                    // count how many indices > idx1
                    int cnt = vec.end() - upper_bound(vec.begin(), vec.end(), idx1);
                    ans += cnt;
                }
            }
        }
    }

    cout<<ans<<"\n";
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