#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i=0; i<n; i++)
    {
    for(int j=i+1; j<n; j++){
        if(s[i] == 'p' && s[j] == 's')
            {cout << "NO\n";return;}
            else if(s[i] == 's' && s[j] == 'p')
            {
                int s1 = n - i;
                int p = j+1;
                if(min(s1, p) > j - i + 1)
                {cout << "NO\n";return;
                }
            }
        }
    }

    cout << "YES\n";

}

signed main(){
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}