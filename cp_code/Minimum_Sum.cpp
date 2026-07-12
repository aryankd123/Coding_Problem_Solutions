#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int>L(n,-1);
    vector<int>R(n,n);

    stack<int>str;
    stack<int>stl;

    for(int i=0;i<n;i++){
        int x=v[i];
        while(!str.empty() && x<v[str.top()]){
            int idx=str.top();
            str.pop();
            R[idx]=i;
        }
        str.push(i);
        
    }

     for(int i=n-1;i>=0;i--){
        int x=v[i];
        while(!stl.empty() && x<=v[stl.top()]){
            int idx=stl.top();
            stl.pop();
            L[idx]=i;
        }
        stl.push(i);
        
    }
int ans=0;

    for(int i=0;i<n;i++){
        int contl=i-L[i];
        int contr=R[i]-i;
        int total_c=contl* contr* v[i];
        ans+=total_c;

    }
    cout<<ans;


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}