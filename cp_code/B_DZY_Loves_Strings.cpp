#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int lowest = -1e6 ;
//const int highest= 1e6 ;
bool cmp(pair<char,int> p1, pair<char,int> p2){
    if(p1.second>p2.second)return 0;
    else return 1;
}
void solve(){

string s;
cin>>s;
int n;
cin>>n;
vector<pair<char,int>>mp;
int maxi=0;
for(int i=0;i<26;i++){
    int x;
    cin>>x;
mp.push_back({'a'+i,x});
}
sort(mp.begin(),mp.end(),cmp);
auto it=(mp.end());// whenever you want to assign the it =--(mp.end())use the following method of assigning
it--;

for(int i=0;i<n;i++){
    s.push_back(it->first);
}

int s_len=s.length();
int sum=0;
map<char,int> mp1(mp.begin(), mp.end());

for(int i=0;i<s_len;i++){
sum+=mp1[s[i]]*(i+1);
}

cout<<sum;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}