#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'

void solve(){
    int N, X, Y; 
    cin >> N >> X >> Y;

    int K = X / (Y + 1);  

    for (int i = 0; i < Y; ++i) {
        for (int j = 0; j < K; ++j) {
            cout << 'R';  
        }
        if (i < X % (Y + 1)) {
            cout << 'R'; 
        }
        cout << 'B';  
    }

    for (int i = 0; i < K; ++i) {
        cout << 'R';
    }
    cout << nl;
}

signed main(){
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}