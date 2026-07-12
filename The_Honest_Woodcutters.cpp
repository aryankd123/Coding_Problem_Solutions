#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin>>n;
  vector<int>v(n+1,0);
  vector<int>g(n+1,0);
  for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    v[i]=x;
  }  
  for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    g[i]=x;
  }

  for(int i=1;i<=n;i++){
    int flag =v[i];
    if(g[flag]!=i){cout<<"No";return ;}
  }

  cout<<"Yes";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}