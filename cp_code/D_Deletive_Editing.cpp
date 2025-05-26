#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
string s1;
string s2;
cin>>s1>>s2;
reverse(s1.begin(),s1.end());
reverse(s2.begin(),s2.end());
int a=s1.size();
int b=s2.size();
int flag=0;
int flag2=0;
int count=0;
for(int i=0;i<b;i++){
    count=0;
    for(int j=flag;j<a;j++){
        if(s1[j]==s2[i]){flag2=j;count++;break;}
    }
    if(count==0) {cout<<"NO"<<'\n';return;}
    for(int k=i+1;k<b;k++){
        for(int h=flag;h<flag2;h++){
            if(s2[k]==s1[h]) {cout<<"NO"<<'\n';return;}
        }
    }
    flag=flag2+1;
 
}
//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
 
cout<<"YES"<<'\n';
 
 
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