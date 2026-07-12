#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin>>n;
  int cnt=0;
    while(n>0){
        cnt++;
        n=n/10;

    }
    int flag=10;
    while(cnt>1){flag=flag*10;cnt--;}
    cout<<flag+1<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}