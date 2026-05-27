#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;
 
 
 



void solve(){
int n;

cin>>n;
set<pi> v;
map<pi,int> mp;

for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;
v.insert({x,y});
mp[{x,y}]=0;
}

int del_row[]={-1,-1,0,0,1,1};
int del_col[]={-1,0,-1,1,0,1};

int ct=0;

queue<pi> q;
for(auto it:mp){
    if(it.second==0){q.push(it.first);ct++;}
while(!q.empty()){
    
    pi pp=q.front();
    int x=pp.first;
    int y=pp.second;
    mp[{x,y}]=1;
q.pop();
    for(int i=0;i<6;i++){
        int n_row=x+del_row[i];
        int n_col=y+del_col[i];
        if(n_row>=-1000 && n_row<=1000 && n_col<=1000 && n_col>=-1000 && mp.find({n_row,n_col})!=mp.end() && mp[{n_row,n_col}]==0){
            mp[{n_row,n_col}]=1;
            q.push({n_row,n_col});

        }
    }
    

}
}
cout<<ct;
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
// }
    return 0;
}