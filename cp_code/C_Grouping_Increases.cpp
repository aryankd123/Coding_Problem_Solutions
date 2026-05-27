#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int n, al = INT_MAX, bl = INT_MAX, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(al >= bl){
            if(bl >= a){
                bl = a;
            }
            else if(a > al){
                bl = a;
                ans++;
            }
            else{
                al = a;
            }
        }
        else{
            if(al >= a){
                al = a;
            }
            else if(a > bl){
                al = a;
                ans++;
            }
            else{
                bl = a;
            }
        }
    }
    cout << ans << endl;
}

signed main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}