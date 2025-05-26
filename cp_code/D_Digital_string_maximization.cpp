#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
string s;
cin>>s;
int n=s.length();
for(int i=1;i<n;i++){
    int flag=s[i]-'0';
    int count=i;
    if(flag>0){
    for(int j=i-1;j>=0;j--){
        if(flag-1>(s[j]-'0')){--flag;if(j==0)count=0;}
        else {count=j+1;break;}
        
        }
        for(int k=i-1;k>=count;k--){swap(s[k],s[k+1]);}s[count]=flag+'0';
    }
    }
cout<<s<<'\n';
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