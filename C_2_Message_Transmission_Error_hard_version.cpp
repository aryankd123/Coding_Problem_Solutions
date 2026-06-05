#include <bits/stdc++.h>
using namespace std;



vector<int>z_fn(string &s){
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

    vector<int>z_arr=z_fn(s);
    int flag =0;

    for(int i=1;i<n-1;i++){
        if(i+z_arr[i]==n && z_arr[i]-1>=i){
            flag =i;
            break;

        }
    }
    if(flag ==0){
        cout<<"NO\n";
        return ;
    }
    cout<<"YES\n";
    for(int i=flag;i<n;i++){
        cout<<s[i];
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