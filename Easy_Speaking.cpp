#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    // vector<char>v;
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]!='a'&& s[i]!='e'&&  s[i]!='i'&&  s[i]!='o'&&  s[i]!='u'){
            flag++;
            if(flag>=4){cout<<"Yes\n";return ;}
            
        }
        else flag=0;
    }
    // v.push_back('a');
    // v.push_back('e');
    // v.push_back
    cout<<"No\n";
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