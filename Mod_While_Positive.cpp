#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    int ct=0;
int x=m;

    while(x){
    ct++;
    x=n%x;
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