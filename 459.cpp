#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string ans="";

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int  c=s[0]-'a';
        if(c<=2)ans.push_back('2');
        else if(c<=5)ans.push_back('3');
        else if(c<=8)ans.push_back('4');
else if(c<=11)ans.push_back('5');
else if(c<=14)ans.push_back('6');
else if(c<=18)ans.push_back('7');
else if(c<=21)ans.push_back('8');
else if(c<=25)ans.push_back('9');
    }
    for(auto val:ans)cout<<val;
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