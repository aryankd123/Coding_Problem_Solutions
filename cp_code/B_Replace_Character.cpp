#include <bits/stdc++.h>
using namespace std;
#define int long long
// bool to_sort(pair<char,int>p1,pair<char,int>p2){
//     if(p1.second<p2.second)return 1;
//     else return 0;
// }
void solve(){
int n;
cin>>n;
string s;
cin>>s;
vector<int> v(26);



for(int i=0;i<n;i++){
int a=s[i];
v[a-97]++;
}
int min=20;
int max=-1;
int min_flag=-1;
int max_flag=-1;
for(int i=0;i<26;i++){
if(v[i]!=0&&v[i]<=min){min=v[i];min_flag=i;}
if(v[i]!=0&&v[i]>max){max=v[i];max_flag=i;}
}
char min_char=min_flag+97;
char max_char=max_flag+97;


int count_flag=0;
for(int i=0;i<n;i++){
    if(count_flag==0 && s[i]==min_char){s[i]=max_char;count_flag++;}
}
cout<<s<<'\n';

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




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