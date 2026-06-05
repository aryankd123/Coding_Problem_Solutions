#include <bits/stdc++.h>
using namespace std;

vector<int>z_fn(string& s){
    int n=s.size();
    vector<int>z(n,0);
    int l=0;
    int r=0;

    for(int i=1;i<n;i++){
        if(i<=r){
            z[i]=min(r-i+1,z[i-l]);

        }
        
        while(i+z[i]<n  && s[z[i]]==s[i+z[i]]){
                z[i]++;
        }

        if(i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;

        }
    }
    return z;

}

void solve() {
    string s;
    string p;
    cin>>s>>p;
    int n=s.size();
    int m=p.size();
    p.push_back('$');
    for(int i=0;i<n;i++){
        p.push_back(s[i]);
    }

    vector<int>z_arr=z_fn(p);
    int ans=0;
    for(int i=0;i<z_arr.size();i++){
        if(z_arr[i]==m)ans++;

    }
    cout<<ans;
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