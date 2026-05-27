#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ct=0;

    for(int i=0;i<n;i++){
            if(s[i]=='o')ct++;
            else break;
    }
    string ans="";
    for(int i=ct;i<n;i++){
        ans.push_back(s[i]);
    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        solve();
    
    
    return 0;
}   