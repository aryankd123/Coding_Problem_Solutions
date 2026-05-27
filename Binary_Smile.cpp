#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int ct1=0;
    int ct2=0;
    // map<int,pair<int,int>>mp;

    for(int i=0;i<n;i++){
        if(s1[i]=='1')ct1++;
        if(s2[i]=='1')ct2++;

    }
    if(ct1!=ct2){cout<<"-1\n";return ;}
    vector<int>v(ct1+1,0);
    vector<int>v2(ct1+1,0);
    ct1=0;
    ct2=0;

    for(int i=0;i<n;i++){
        if(s1[i]=='1'){ct1++;v[ct1]=i;}

        if(s2[i]=='1'){ct2++;v2[ct2]=i;}
        

    }
    int ans=0;
    for(int i=1;i<v.size();i++){
        if(v[i]!=v2[i])ans++;
    }
    cout<<ans<<"\n";
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