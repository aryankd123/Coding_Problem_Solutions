#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
void solve() {
    int n;
    cin>>n;
    vector<ld>v;
    for(int i=0 ;i<n;i++){
        ld x;
        cin>>x;
        v.push_back(x);
        }
    
    vector<ld>prev(n+1,0.0);
    prev[0]=1;
    vector<ld>curr;
    for(int i=1;i<=n;i++){
        vector<ld>curr(n+1,0);
        curr[0]=prev[0]*(1-v[i-1]);
        for(int j=1;j<=i;j++){
            curr[j]=prev[j-1]*v[i-1]+prev[j]*(1-v[i-1]);
        }
        prev=curr;

    }
    ld ans=0;
    for(int i=n/2+1;i<=n;i++){
        ans+=prev[i];
    }
    cout<<setprecision(10)<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
        solve();
    
    
    return 0;
}