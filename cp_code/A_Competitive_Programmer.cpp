#include<bits/stdc++.h>
using namespace std;
#define fastIOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    string s1;
    cin>>s1;
    int sum=0;
    int count=0;


    int count1=0;
    
    for(int i=0;i<s1.size();i++){
        if((s1[i]-'0')%2==0){
            count++;
        }
        if(s1[i]-'0'==0){
            count1++;
        }
        sum+=(s1[i]-'0');
    }
    if(sum%3==0 && count>=2 && count1>=1){
        cout<<"red"<<endl;
    }
    else{
        cout<<"cyan"<<endl;
    }
}

int main(){
    fastIOS;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}