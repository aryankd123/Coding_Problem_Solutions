#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

int n,k;
cin>>n>>k;
map <int,int> mp;
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
mp[x]++;
}
auto it_ver_last=--mp.end();
auto it_ver_first=mp.begin();
if((it_ver_last->first)-(it_ver_first->first)>k){cout<<"NO";return;}


else{
map<int,vector<int>>mp1;
int count=0;
for(auto it=mp.begin();it!=mp.end();it++){
if(it==mp.begin()){for(int i=0;i<it->first;i++){mp1[it->first].push_back(1);}count++;}
else{
   auto it2 = it;
if (it2 != mp.begin()) {
    --it2;
}
    int diff=0;
    diff=it->first-it2->first;
    
    if(diff==0)it->second=it2->second;
    else if(diff==1){
    
        if (mp1.find(it->first) == mp1.end()) {
            mp1[it->first] = {};
                                }
                                mp1[it->first]=mp1[it2->first];
        // mp1[it->first].push_back(count);
        mp1[it->first].push_back(count);count++;}






    else if(diff>1){
        if (mp1.find(it->first) == mp1.end()) {
            mp1[it->first] = {};
                                }
                                 mp1[it->first]=mp1[it2->first];
         
        for(int i=0;i<diff;i++){
            
            if(i==0){mp1[it->first].push_back(count);count++;}
            else {mp1[it->first].push_back(count);count++;}}
        }
        
    }
}
cout<<"YES"<<'\n';
for(int i=0;i<v.size();i++){
    auto itk=mp1.find(v[i]);
    vector<int> v_ans;
    v_ans=itk->second ;
    for(int j=0;j<v_ans.size();j++){
        cout<<v_ans[j]<<" ";
    }
    cout<<'\n';
}

}
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}