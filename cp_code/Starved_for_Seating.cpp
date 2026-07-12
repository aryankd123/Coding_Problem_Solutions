#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n,0);
    int total=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i]=x;
        total+=x;


    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x=v[i];
            int y=v[j];
            if(total/2+x/2+y/2>k)ans++;
        }
    }
    cout<<ans<<"\n";
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