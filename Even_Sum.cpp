#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>v;
    int odd_c=0;
    int even_c=0;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        if(x%2==0)even_c++;
        else odd_c++;

    }
if(odd_c%2==0 && even_c==0 )cout<<"No\n";
else cout<<"Yes\n";
    
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