#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>v;
int tot=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        tot=tot|x;
    }
    int k=0;

    int curr=0;
    for(int i=0;i<n;i++){
        curr=curr|v[i];
        if(curr==tot){k++;curr=0;}

    }
    cout<<n-k<<"\n";

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