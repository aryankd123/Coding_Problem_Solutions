#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;
 
 
 
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
//***prefix xor function for prefix xor from 1 to a****
//int xor_ret(int a){
//if(a%4==0)return a;
//if (a%4==1)return 1;
//if(a%4==2)return a+1;
//return 0;
//}
 
 
//***binary_multiplication***
//int bin_multiply(int a,int b){int ans=0;while(b){if(b&1)ans=(ans+a)%M;a=(a+a)%M; b=b>>1;} return ans;}
 
//***modular/bin_exponentiation***
//****recursive_code***
//int bin_exp_rec(int a,int b){a=a%M;if(b==0)return 1;long long   res=bin_exp_rec(a,b/2);  
//if (b&1)return (a* (res * res)%M)%M;else return (res*res)%M;}
//****iterative_code***
//int bin_exp_iter(int a,int b){a=a%M;int ans=1;while(b){if(b&1) ans=(bin_multiply(ans,a));
//a=bin_multiply(a,a);b=(b>>1);}return ans;}
 
 
 
// **Modular Multiplicative Inverse of A
//    int mmi(int a){
 //   int mmi_a=(bin_exp_iter(a,M-2));
 //  return mmi_a;}
 // 
//*****SUBSET GENERATION *****//
//vector<vector<int>> subsets(vector<int>& nums) {
//int n=nums.size();
//int subset_ct=(1<<n);
//vector<vector<int>>powerset;
//for(int mask=0;mask<subset_ct;mask++){
//vector<int> subset;
//for(int i=0;i<n;i++){
//if((mask& (1<<i))!=0)subset.push_back(nums[i]);
//}
//powerset.push_back(subset);
 //}
//return powerset;
//}
 //   int fac[MAXN + 1];
// int inv[MAXN + 1];
//void factorial() {
//fac[0] = 1;
//for (int i=1;i<=MAXN;i++){fac[i]=fac[i-1]*i%MOD; }
//}
//void inverses() {
//inv[MAXN]=mmi(fac[MAXN],MOD);
//for (int i = MAXN; i >= 1; i--) { inv[i - 1] = inv[i] * i % MOD; }
//}
//int choose(int n, int r) { return fac[n] * inv[r] % MOD * inv[n - r] % MOD; }
//int min_max_binsearch(vector<int>& nums, int k) {
//int n=nums.size();int sum=0;int ans=-1;int l = *max_element(nums.begin(), nums.end());     // the min possible subarray sum is the largest value of the array
//for(int i=0;i<n;i++){sum+=nums[i];}
//int r=sum; // the max possible sum of the subarray will be the subarray which is the entire array 
//while(l<=r){int mid=(l)+(r-l)/2;int ct=1;int pnt=-1;int flag_s=nums[0];for(int i=1;i<n;i++){  if(flag_s>mid){pnt=0;break;}   
//flag_s+=nums[i];}if(ct>k || pnt==0){l=mid+1;}           //move to the larger subarray sum 
//if(ct<=k){r=mid-1;ans=mid;}}return ans;}
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
if(!vis[it]) { q.push(it);
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
void solve(){
int n;
cin>>n;
vector<pair<int,int>>vp;
map<int,int>freq;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    freq[x]++;
    vp.push_back({x,i+1});

}
int flag_val=-1;
int mini=INT_MAX;
for(auto it:freq){
    if(it.second<mini){
        mini=it.second;
        flag_val=it.first;
    }
}

if(freq.size()==1){cout<<"NO\n";return;}
int index=-1;

for(int i=0;i<n;i++){
    if(vp[i].first==flag_val)index=vp[i].second;
}
set<int> st;
for(int i=0;i<n;i++){
    if(vp[i].first==flag_val && vp[i].second!=index)st.insert(vp[i].second);
}
cout<<"YES\n";
set<int> different;
for(int i=0;i<n;i++){
    if(vp[i].first!=flag_val){
        different.insert(vp[i].second);
        cout<<index<<" "<<vp[i].second<<"\n";
    }
}

auto it_diff=different.begin();
for(auto val:st){
    cout<<val<<" "<<*it_diff<<"\n";
    it_diff++;
}
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
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}