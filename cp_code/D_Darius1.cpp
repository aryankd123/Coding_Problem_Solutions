#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

int n;
cin>>n;

int count2=0;
int count1=0;
int count0=0;
// int counter1=0;
// int counter0=0;
// int counter2=0;
vector<int> v;
map<int,int>mp;
for(int i=0;i<n;i++){
int x;
cin>>x;
if(x==0)count0++;
else if(x==1)count1++;
else if(x==2)count2++;

v.push_back(x);
mp[i]=x;
}
vector<pair<int,int>> v1;
int flag2=0;
for(auto it=mp.rbegin();flag2<count2;it++){
flag2++;
    if(it->second==0 ){
        auto it1=mp.find(1);if(it1!=mp.end()){v1.push_back({(it1->first)+1,(it->first)+1});swap(it1->second,it->second);}
        auto it2=mp.find(2);if(it2!=mp.end()){v1.push_back({(it2->first)+1,(it->first)+1});swap(it2->second,it->second);}
        }
    
    else if(it->second==1){
        auto it3=mp.find(2);if(it3!=mp.end()){v1.push_back({(it3->first)+1,(it->first)+1});swap(it3->second,it->second);}
    }
    


}
int flag1=0;
auto it4=mp.end();
for(int i=0;i<count2;i++)it4--;
for(;flag1<count1;it4--){
flag1++;
    if(it4->second==0 ){
        auto it1=mp.find(1);v1.push_back({(it1->first)+1,(it4->first)+1});swap(it1->second,it4->second);
    
    

}}
cout<<v1.size()<<endl;
for(int i=0;i<v1.size();i++){
    cout<<v1[i].first<<" "<<v1[i].second<<endl;
}



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