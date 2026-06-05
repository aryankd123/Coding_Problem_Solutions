#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string >v;
    int n;
    cin>>n;
    int flag=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        flag=max(flag,(int)s.size());

    }
    for(int i=0;i<n;i++){
        string s=v[i];
        int need=-s.size()+flag;
        for(int i=0;i<need/2;i++){
            cout<<'.';
        }
        cout<<s;
         for(int i=0;i<need/2;i++){
            cout<<'.';
        }
        cout<<"\n";
    }
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