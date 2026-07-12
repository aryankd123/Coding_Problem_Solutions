#include <bits/stdc++.h>
using namespace std;

vector<int>z_fn(string & s){
    int n=s.size();
    vector<int>z(n,0);
    int l=0;
    int r=0;

    for(int i=1;i<n;i++){
        if(i<=r){
            z[i]=min(r-i+1,z[i-l]);

        }

        while(i+z[i]<n && s[z[i]]==s[i+z[i]])z[i]++;

        if(i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;
        }

    }
    return z;
}
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    reverse(s.begin(),s.end());
    vector<int>ans=z_fn(s);
    reverse(ans.begin(),ans.end());
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        if(x==n)cout<<n<<"\n";
        else cout<<ans[x-1]<<"\n";

    }
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