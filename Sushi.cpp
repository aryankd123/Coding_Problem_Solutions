#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);

    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v2.push_back(x);

    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
int l=0;
int r=0;
int ct=0;
while(r<m && l<n){
    if(v2[r]<=2*v1[l]){
        ct++;
        l++;
        r++;
       

    }
    else l++;

}
cout<<ct;




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