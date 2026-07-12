#include <bits/stdc++.h>
using namespace std;

vector<int>z_fn(string& s){
    int n=s.size();
        int l=0;
        int r=0;

    vector<int>z(n,0);
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



vector<int>pi_fn(string& s){ 
    int n=s.size();

    vector<int>pi(n,0);
    for(int i=1;i<n;i++){
        int j=pi[i-1];

        while(j>0 && s[i]!=s[j]){
            j=pi[j-1];

        }
        if(s[i]==s[j]){
            j++;
        }

        pi[i]=j;

    }

return pi;

}


void solve() {
    string s;
    cin>>s;
    vector<int>ans_z=z_fn(s);
    vector<int>ans_pi=pi_fn(s);
    for(auto val:ans_z)cout<<val<<" ";
    cout<<"\n";
    for(auto val:ans_pi)cout<<val<<" ";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

        solve();

    
    return 0;
}