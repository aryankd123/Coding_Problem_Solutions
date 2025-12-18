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
void bfs(TreeNode* root) {
        queue<TreeNode*> q;
        // vector<vector<int>> final;
        if(root==NULL)return ;

       
        q.push(root);
        while(!q.empty()){
            int s=q.size();
                vector<int> ans;
                while(s--){
                    TreeNode* value=q.front();
                    if(value->left !=NULL)q.push(value->left);
                    if(value->right!=NULL)q.push(value->right);
                    q.pop();
                    ans.push_back(value->val);

                }
               // final.push_back(ans);

        }
        return ;
    }
void solve(){
int n;
cin>>n;
vector<vector<int>> adj(n+1);
vector<bool> vis(n+1,0);
for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
    //adj[b].push_back(a);
}
for(auto it :adj){
    sort(it.begin(),it.end());
}
vis[1]=1;



vector<int> v(n+1,0);
for(int i=1;i<=n;i++){
int x;
cin>>x;
v[i]=x;
}
if(v[1]!=1){cout<<"No\n";return;}
int idx=1;


queue<int> q;
q.push(1);
vis[1]=1;


 while(!q.empty()){
    int baba=q.front();
    q.pop();

set<int> st;
for(auto val:adj[baba]){
    if(!vis[val])st.insert(val);
}
auto itl=st.rbegin();

vector<int> sam;
for(auto it:st){
    sam.push_back(it);
}
reverse(sam.begin(), sam.end());

if(idx + 1 <= n && !sam.empty() && sam[0] == v[idx + 1]) {
    for(int j = 0; j < sam.size(); j++) {
        if(++idx <= n && v[idx] == sam[j]) {
            q.push(sam[j]);
        } else {
            cout << "No\n";
            return;
        }
    }
}
else {
for(auto it:st){
    //cout<<it<<" ";
    if(++idx<=n && v[idx]==(it) ){q.push(it);}
    else {cout<<"No\n";return;}
}
// vis[baba]=1;
        }
 }
cout<<"Yes\n";
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
// }
    return 0;
}