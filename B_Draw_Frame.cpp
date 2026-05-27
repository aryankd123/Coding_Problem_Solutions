#include <bits/stdc++.h>
using namespace std;

void solve() {
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==0 || i==r-1 || j==0 || j==c-1 )cout<<'#';
            else cout<<'.';
        }
        cout<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    
    return 0;
}