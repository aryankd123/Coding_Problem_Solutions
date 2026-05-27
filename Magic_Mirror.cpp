#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    
    vector<int>flag;
    int s1=n/2-1;
    int s2=n/2;
    for(int i=0;i<n;i++){
        if(i<=s1)flag.push_back(v[s1]-v[i]);
        else flag.push_back(v[i]-v[s2]);

    }
    vector<int>cpy=flag;
    reverse(cpy.begin(),cpy.end());
    if(cpy==flag){cout<<"Yes"<<"\n";}
    else cout<<"No\n";

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