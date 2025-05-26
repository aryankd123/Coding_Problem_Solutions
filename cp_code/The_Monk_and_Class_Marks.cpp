#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string> p1,pair<int,string> p2){
if(p1.first>p2.first)return 1;
else if(p1.first<p2.first) return 0;
else {
    if(p1.second<p2.second)return 1;
    else return 0;
}
}



void solve(){
int n;
cin>>n;
vector<pair<int ,string>> v;
while(n--){
    string s;
    int n;
    cin>>s;
    cin>>n;
    v.push_back({n,s});
}
sort(v.begin(),v.end(),cmp);
for(auto it=v.begin();it!=v.end();++it){
    cout<<it->second<<" "<<it->first<<endl;
}
} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}