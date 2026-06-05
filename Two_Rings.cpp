#include <bits/stdc++.h>
using namespace std;
// typedef long double ld;
#define int long long 

void solve() {
int  x1,y1,r1,x2,y2,r2;
cin>>x1>>y1>>r1>>x2>>y2>>r2;
int  dis= ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
int  cd=(r1+r2)*(r1+r2);
if(cd>=dis && dis>=(r1-r2)*(r1-r2))cout<<"Yes\n";
else cout<<"No\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}