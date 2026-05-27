#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(pair<char,int> p1,pair<char,int>p2){
    if(p1.second<p2.second){return true;}
    else if(p1.second>p2.second) {return false;}
    else if(p1.second==p2.second){
        if(p1.first>p2.first)return true;
        else return false;
                                 }

}
void solve(){

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
map<char,int >mp;
string s;
cin>>s;
for(auto it=s.begin();it!=s.end();it++){
    mp[*it]++;
}
vector<pair<char, int>> v(mp.begin(), mp.end());
sort(v.begin(),v.end(),cmp);
auto it1=v.end();
--it1;
cout<<it1->first;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}