#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,y;
    cin>>x>>y;
    if(abs(x-y)<=2)cout<<"Interesting";
    else cout<<"Boring";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    
    return 0;
}