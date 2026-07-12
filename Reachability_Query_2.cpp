#include <bits/stdc++.h>
using namespace std;

struct ans{
    vector<set<int>>parent;
    vector<bool>can_reach;
    ans(int n){
        parent.resize(n+1);
        can_reach.resize(n+1,0);
    for(int i=0;i<=n;i++){
        parent[i].insert(i);

    }
    }


void paint(int x){

    can_reach[x]=1;
    // if(parent[x].find(x) || can_reach[parent[x]]==1)return ;
    // return paint(parent[x]);
    for(auto neigh:parent[x]){
        if(can_reach[neigh]==1)continue ;
         paint(neigh);
    }
    
}
bool is_reachable(int x){
    return can_reach[x];
}

};

// struct dsu{
// // private: 
//     vector<int>parent,size;
// vector<bool>can_reach;

// // public :
// dsu (int n){
//     parent.resize(n+1);
//     size.resize(n+1,1);
//     can_reach.resize(n+1,0);
//     for(int i=0;i<=n;i++){
//         parent[i]=i;

//     }

// }

// int  find(int node){
// if(parent[node]==node)return node;

// return parent[node]=find(parent[node]);
// }

// void join (int x,int y){

// int p_x=find(x);
// int p_y=find(y);
// if(p_x==p_y)return ;

// if(size[p_x]>size[p_y]){
//     size[p_x]+=size[p_y];
//     parent[p_y]=p_x;
// }
// else {
//     size[p_y]+=size[p_x];
//     parent[p_x]=p_y;
// }

// }
// void paint(int x){

//     can_reach[x]=1;
//     if(parent[x]==x)return ;
//     paint(find(x));


// }
// bool is_reachable(int x){
//     return can_reach[x];
// }
// int find_size(int x){
//     return size[x];
// }
// };


void solve() {
    int n,m;
    cin>>n>>m;

    ans aa(n);

   

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        aa.parent[y].insert(x);
    }

    int q;
    cin>>q;
    while(q--){
        int type,  node;
        cin>>type>>node;
        if(type==1){
            aa.paint(node);
        }
        else {
            if(aa.is_reachable(node))cout<<"Yes\n";
            else cout<<"No\n";
        }
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