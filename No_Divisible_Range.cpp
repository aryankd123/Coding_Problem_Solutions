#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>prefix;
    prefix.push_back(0);
    for(int  i=1;i<=n;i++){
        prefix.push_back(prefix.back()+v[i-1]);

    } 
    int cnt=0;
    for(int l=1;l<=n;l++){
        for(int r=l;r<=n;r++){
        int flag=0;

            for(int i=l;i<=r;i++){
                if((prefix[r]-prefix[l-1])%v[i-1]==0)flag++;
            }
            if(flag==0)cnt++;

        }
        
    }
    cout<<cnt;
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