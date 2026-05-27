#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    
    set<int>st;
    // int ct=0;
    int flag=-1;
    if((n-k)%2 !=0){
        flag= (n-k)/2;
    }
    else flag =(n-k)/2-1;
    for(int i=max(flag,0);i<=min(k+flag ,n-1);i++){
        st.insert(v[i]);
    }
    for(auto it: st){
        cout<<it<<" ";
    }
    cout<<"\n";
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