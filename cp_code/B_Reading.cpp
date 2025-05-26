#include <bits/stdc++.h>
using namespace std;
//#define int long long
//const int lowest = -1e6 ;
//const int highest= 1e6 ;
// bool cmp(pair<int,int>p1,pair<int,int>p2){
//     if(p1.first>p2.first)return 1;
//     else return 0;
// }



 
int main()
{
    ifstream cin("input.txt");
	ofstream cout("output.txt");
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,k;
cin>>n>>k;
vector<pair<int,int>> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back({x,i+1});
}
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
//int count=0;
cout<<v[k-1].first<<'\n';
for(int i=0;i<k;i++){
    cout<<v[i].second<<" ";
}
//cout<<'\n';

//solve();

    return 0;
}