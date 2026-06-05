#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
int ct=0;

    for(int i=0;i<n-2;i++){
        char x=s[i];
        char y=s[i+1];
        char z=s[i+2];
        if(x==y && y==z){
            
            for(int k=0;k<26;k++){
                if('a'+k!=x && i+3<n && 'a'+k!=s[i+3]){s[i+2]='a'+k;ct++;break;}
                else if('a'+k!=x && i+3>=n){s[i+2]='a'+k;ct++;break;}
            }
        }
    }
    cout<<ct<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}