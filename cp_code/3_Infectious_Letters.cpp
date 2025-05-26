#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n;
cin>>n;
string s;
cin>>s;
int flag=-1;
int sum=0;
int count =0;
for(int i=0;i<n;i++){
    if(s[i]=='a')count++;
if(flag==-1 && s[i]=='b'&& count>0){
sum+=i; flag=i;count=0;
}
else if(s[i]=='b' && count>0){
    sum+=i-flag-1;count=0;
    flag=i;
}
else if(s[i]=='b' && count==0){
    flag=i;count=0;
}

}
if(count>0 && flag==-1)sum+=n;
else if(count>0 )sum+=n-1-flag;
cout<<sum;

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

solve();

    return 0;
}