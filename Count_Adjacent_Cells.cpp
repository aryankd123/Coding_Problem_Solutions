#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    // if(n==1 && m==1 ){cout<<0;return ;}
    //  if(n==1 || m==1 ){
    //      for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<1<<" ";
    //     }
    //     cout<<"\n";
    //  }
    //  return ;
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if((i==0 && j==0) ||(i==n-1 && j==m-1)|| (i==n-1 && j==0) || (i==0 && j==m-1))cout<<2<<" ";
    //         else if(i==0 || i==n-1 || j==0 || j==m-1)cout<<3<<" ";
    //         else cout<<4<<" ";

    //     }
    //     cout<<"\n";
    // }
    int del_r[]={-1,0,1,0};
    int del_c[]={0,1,0,-1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int ct=0;
            for(int k=0;k<4;k++){
                int n_row=i+del_r[k];
                int n_col=j+del_c[k];
                if(n_row<n && n_row>=0 && n_col<m && n_col>=0 )ct++;
            }
            cout<<ct<<" ";
        }
        cout<<"\n";
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