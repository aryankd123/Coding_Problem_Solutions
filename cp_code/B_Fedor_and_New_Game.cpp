#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> bin(int a){
    vector<int> v1;
    while(a){
        v1.push_back(a%2);
        a=a/2;
    }
    //reverse(v1.begin(),v1.end());
    return v1;
}
void solve(){

// vector<int> p=bin(5);
// for(auto it =p.begin();it!=p.end();++it)cout<<*it;
// cout<<endl;
int n,m,k;
cin>>n>>m>>k;
vector<int> v;
for(int i=0;i<m+1;i++){
int x;
cin>>x;
v.push_back(x);
}
int ans=0;
vector<int> flag=bin(v[m]);
for(int i=0;i<m;i++){
    vector<int> req=bin(v[i]);
    int count=0;
    int diff=flag.size()-req.size();
    int diff2=req.size()-flag.size();

    //note -if you use vec.size() it dynamically computes the size so you may have an issue with it if you use it as your comparison for vector size when the vector size is changing 
    if(req.size()<flag.size()){for(int g=0;g<diff;g++)req.push_back(0);}
    else if(req.size()>flag.size()){for(int g=0;g<diff2;g++)flag.push_back(0);}
    for(int j=0;j<flag.size();j++){
        if(req[j]!=flag[j])count++;
    }
    
    if(count<=k){ans++;}

}
cout<<ans;
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}