#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>v(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='1')v[i][j]=1;

        }
    }

    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j-1>=0)dp[i][j]+=dp[i][j-1];
            if(i-1>=0)dp[i][j]+=dp[i-1][j];
            if(i-1>=0 && j-1>=0)dp[i][j]-=dp[i-1][j-1];
            if(v[i][j]==1)dp[i][j]++;

        }
    }
   int ans=0;

    vector<int> freq(n * m + 1, 0);

    for(int r1=0; r1<n; r1++){
        for(int r2=r1; r2<n; r2++){
            
            freq[0] = 1;
            for(int c=0; c<m; c++){
    int current_sum = dp[r2][c];
                if (r1 -1 >= 0) {
                    current_sum -= dp[r1 - 1][c];
    }
                int req = current_sum - k;
         if(req >=0){
                    ans += freq[req];
                }
                
    freq[current_sum]++;
            }
            
for(int c=0;c<m; c++){
                int current_sum = dp[r2][c];
                if (r1 -1 >= 0) {
                    current_sum -= dp[r1 - 1][c];
                }
                freq[current_sum] = 0;
            }
        }
    }

    cout<<ans<<"\n";
}




signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

        solve();
    
    
    return 0;
}