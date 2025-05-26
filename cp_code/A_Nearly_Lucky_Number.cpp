#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n;
cin>>n;
int count=0;
while(n>0){
    if(n%10==4 || n%10==7)count++;
    n/=10;
}
int flag=1;
if(count==0)cout<<"NO"<<'\n';
else {
    while(count>0){
        if(!(count%10==4 || count%10==7)){flag=0;break;}
      count/=10;
    }
     
    if(flag>0)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}

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