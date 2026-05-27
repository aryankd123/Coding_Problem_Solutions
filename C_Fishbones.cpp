#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;

    vector<vector<vector<int>>>a(12,vector<vector<int>>(26,vector<int>(12,0)));
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});

    }
    int m;
    cin>>m;
    vector<string>vs;

    for(int j=0;j<m;j++){
        string s;
        cin>>s;
        // vs.push_back(s);
            for(int k=0;k<s.size();k++){
                a[s.size()][s[k]-'a'][k+1]++;
            }
            vs.push_back(s);
    }

    for(int i=0;i<m;i++){
        if(vs[i].size()!=n){cout<<"No\n";continue;}
        
            int ct=0;
            for(int k=0;k<n;k++){
                int x=vp[k].first;
                int y=vp[k].second;

                int flag=vs[i][k]-'a';
                if(a[x][flag][y]>0)ct++;
            }
            if(ct==n)cout<<"Yes\n";
            else cout<<"No\n";
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    
    return 0;
}