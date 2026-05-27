#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    vector<int> v1(3), v2(3), v3(3);

    
    for (int i = 0; i < 3; i++) cin >> v1[i];
    for (int i = 0; i < 3; i++) cin >> v2[i];
    for (int i = 0; i < 3; i++) cin >> v3[i];


    int a = v1[1] + v1[2]; 
    int b = v2[0] + v2[2];
    int c = v3[0] + v3[1]; 

  
    v1[0]=(-a+b+c)/2;
    v2[1]=(a-b+c)/2;
    v3[2]=(a+b-c)/2;
  
    for (int i = 0; i < 3; i++) cout << v1[i] << " ";
    cout << '\n';
    for (int i = 0; i < 3; i++) cout << v2[i] << " ";
    cout << '\n';
    for (int i = 0; i < 3; i++) cout << v3[i] << " ";
    cout << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}