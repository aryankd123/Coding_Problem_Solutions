#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){

int n,k;
cin>>n>>k;
map <int,int> mp;
//vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
mp[x]++;
//v.push_back(x);
}


// for(auto it=mp.begin();it!=mp.end();it++){
//     cout<<it->first<<" "<<it->second;
// }
//cout<<endl;
int count=0;
//auto it2=mp.begin();
while(!(mp.size()==1 && (mp.begin())->first==k)){
    vector<int>v;
    for(auto it=mp.rbegin() ;it!=mp.rend();it++){
        if(it->first!=k && it->second>0){v.push_back(it->first);
                            }

                                                }
                   for(auto val:v){--(mp[val]);mp[val+1]++;if(mp[val]==0){mp.erase(val);}}
    count++;
} 
cout<<count;


}
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}