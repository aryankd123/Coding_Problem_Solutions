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
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        int nn=x.size();
        string flag =x;
        flag.push_back('$');
        flag.append(s);
        vector<int>z_arr=z_fn(flag);
        bool flagg =0;
        for(int i=1;i<z_arr.size();i++){
            if(z_arr[i]==nn)flagg =1;
        }
        if(flagg==1)cout<<"YES\n";
        else cout<<"NO\n";

    }
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