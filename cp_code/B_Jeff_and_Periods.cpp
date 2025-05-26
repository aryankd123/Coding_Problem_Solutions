#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
map<int ,pair<int,int>> mp;
set<int> s;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    auto it = mp.find(x);

    if(it!=mp.end()){if(mp[x].second!=i-mp[x].first && mp[x].second!=0){mp.erase(x);s.insert(x);}
                     else {mp[x].second=i-mp[x].first;mp[x].first=i; }
                    
                    
                    
                    }
    else {
        auto it1=s.find(x);
        if(it1==s.end()){
        mp[x].first=i;
        mp[x].second=0;}
    }

}

cout<<mp.size()<<endl;
for(auto it=mp.begin();it!=mp.end();++it){
    cout<<it->first<<" "<<((*it).second).second<<endl;
}



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}