#include <bits/stdc++.h>
using namespace std;
#define int long long

const int highest = 2e5 +1;
int a[highest];
map<int, int> mp;  

void input_arr(int n) {
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
}

void pre_compute() {
    for (int i = 1; i < highest; i++) {
        a[i] = 0;
    }
    
    for (int i = 1; i < highest; i++) {
       if(mp.find(i)!=mp.end()){int flag=mp[i];
        for (int j = 0; j < highest; j += i) {
            a[j] += flag;
        }}
    }
}

void solve(int n) {
    int max_value = *max_element(a + 1, a + n+1);
    cout << max_value << '\n';
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;  
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        memset(a, 0, sizeof(a));
        mp.clear();

        input_arr(n);
        
        pre_compute();
        
        solve(n);
       
    }

    return 0;
}