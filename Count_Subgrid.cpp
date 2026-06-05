#include <bits/stdc++.h>
using namespace std;

void solve() {
    set<vector<vector<char>>>st;
    int n,m;
    cin>>n>>m;
    vector<vector<char>>v(n,vector<char>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char x;
            cin>>x;
            v[i][j]=x;


        }

    }
    vector<vector<char>> cpy(m,vector<char>(m));

    for(int i=0;i<=n-m;i++){
        for(int j=0;j<=n-m;j++){
            for(int r=i;r<=i+m-1;r++){
                for(int c=j;c<=j+m-1;c++){
                    cpy[r-i][c-j]=v[r][c];
                }
            }
            st.insert(cpy);
        }
    }
    cout<<st.size();

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