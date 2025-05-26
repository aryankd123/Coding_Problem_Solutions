#include <bits/stdc++.h>
using namespace std;
#define int long long

int get_max_set_bit(int x) {
    int max_bit_set = -1;
    for (int i = 0; i < 32; i++) {
        if ((1 << i) & x) {
            max_bit_set = i;
        }
    }
    return max_bit_set;
}

void solve() {
    int n;
    cin >> n;

    //vector<int> v(n);
    vector<int> v1(n);
    

    for (int i = 0; i < n; i++) {
        //cin >> v[i];
        cin >> v1[i];

    }
    reverse(v1.begin(),v1.end());
 int ans=0;
    vector<int> max_bits(32);
    for(int i=0;i<32;i++){max_bits[i]=0;}
    for (int i = 0; i < n; i++) {
        int flag= get_max_set_bit(v1[i]);
       // cout<<flag<<' ';
        max_bits[flag]++;
       if(i+1<n){ int bla=get_max_set_bit(v1[i+1]);
        ans+=max_bits[bla];
        }
    }


    cout<<ans<<'\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}