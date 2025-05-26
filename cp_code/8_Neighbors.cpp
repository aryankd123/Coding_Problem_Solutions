#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n,m;
cin>>n>>m;
char arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        char s;
        cin>>s;
        arr[i][j]=s;
    }
}
int a,b;
cin>>a>>b;
a=a-1;
b=b-1;
int flag =1;
for(int c=a-1;c<=a+1;c++){
    if(c>=0&& c<n){
        for(int r=b-1;r<=b+1;r++){
            if(r>=0 && r<m){
                if(!(c==a&&r==b)){if(arr[c][r]=='.')flag--;}
                            }
                                 }
                 }
}
//cout<<flag;
if(flag>0)cout<<"yes";

else cout<<"no";
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
// int t;
// cin>>t;
// while (t--){
solve();
// }
    return 0;
}