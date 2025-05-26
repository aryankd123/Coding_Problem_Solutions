#include <bits/stdc++.h>
using namespace std;
#define int long long 


void solve(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)cin >> arr[i];
    string s;
    cin >> s;

    int zero = 0, one=0;
    int pref[n+1];
    pref[0] = 0;

    for(int i = 0; i<n; i++)
    {
        if(s[i] == '0') zero ^=arr[i];
        else one ^=arr[i];
        pref[i+1]=pref[i]^arr[i];
    }

    int q;
    cin>>q;
    for(int i = 0; i<q; i++)
    {
        int a; 
        cin>>a;
        if(a==2) 
        {
            int g;
            cin >> g;
            if(g == 0)cout<<zero<< " ";
            else cout << one<<" ";
        }
        else 
        {  int l, r;
        cin >> l >> r; 
        zero^=(pref[r]^pref[l-1]);
     one^=(pref[r]^pref[l-1]);
        }
        
    }

    cout <<'\n';
}

signed main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}