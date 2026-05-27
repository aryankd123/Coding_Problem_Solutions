#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    long long  n=s.size();
    long long  ans=0;

    for(long long  i=0;i<n;i++){
        if(s[i]=='C'){
          long long  flag=min(i,n-i-1);
          ans+=flag+1;  
        
        }

    }
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}