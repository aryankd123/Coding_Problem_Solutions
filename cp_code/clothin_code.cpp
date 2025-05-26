#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxi=1e9;
void solve(){
int n,m;
cin>>n>>m;

map<int,int> price;
for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    price[i]=x;

}
if(m<3){cout<<-1;return;}
int lowest_cost=maxi;
map <int,int> mp;
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    mp.insert({x,y});
    mp.insert({y,x});
    

}

for(auto it=mp.begin();it!=mp.end();it++){
int cost=0;
// cost+=it->first+it->second;
auto it2=mp.find(it->second);
if(it2!=mp.end()){
    auto it3=mp.find(it2->second);
            if(it3!=mp.end() && it3->second==it->first){
                    cost+=price[it->first]+price[it->second]+price[it2->second];


                            }
    
    
    
    
    
    
                 }

if(cost<=lowest_cost )lowest_cost=cost;


}
if(lowest_cost==0)cout<<-1;
else cout<<lowest_cost;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}