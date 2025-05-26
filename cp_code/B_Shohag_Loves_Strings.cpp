#include <bits/stdc++.h>
using namespace std;
#define int long long
int solve(){

string s;
cin>>s;
if(s.length()==1){cout<<-1<<endl;return 0;}
else if(s.length()==2){
    if(s[0]!=s[1]){cout<<-1<<endl;return 0;}
    else if(s[0]==s[1]){cout<<s<<endl;return 0;}
}
else {
    int flag=0;
    for(int i=0;i<s.length()-1;i++){
       if(s[i]==s[i+1]){cout<<s[i]<<s[i+1]<<endl;return 0;}
       }
       for(int i=0;i<s.length()-2;i++){
        if(s[i]==s[i+2])flag++;
        if(s[i]!=s[i+2]){cout<<s[i]<<s[i+1]<<s[i+2]<<endl;return 0;}
       }
       if(flag==s.length()-2){cout<<-1<<endl;return 0;}
         //cout<<s[0]<<s[1]<<s[2]<<endl;return 0;


    } 

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