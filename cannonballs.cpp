#include <bits/stdc++.h>
using namespace std;
#define int long long 


vector<int>v;
// vector<vector<int>>dp(121,vector<int>(300001,INT_MAX));
 vector<int>curr(300001,INT_MAX);
 
//vector<int>prev(300001,INT_MAX);

// int cnt=0;/
void make(){
    int start =1;


    v.push_back(0);
    v.push_back(start);

    while(v.back()<=300000){
        // cnt++;
    start++;
    int temp= (start*(start+1)*(start+2))/6;
    v.push_back(temp);


    }



    int s=v.size();

    // dp[0][0]=0;
    //vector<int>curr(300001,INT_MAX);
     vector<int>prev(300001,INT_MAX);
curr[0]=0;
prev[0]=0;



    // for(int i=0;i<=120;i++){
    //     dp[i][0]=0;
        


    // }
    for(int i=1;i<=120;i++){
        for(int j=1;j<=300000;j++){
        // dp[i][j]=dp[i-1][j];
        curr[j]=prev[j];

if(j-v[i]>=0 )curr[j]=min(curr[j],curr[j-v[i]]+1);
        // if(j-v[i]>=0 )dp[i][j]=min(dp[i][j],dp[i][j-v[i]]+1);
        }
prev=curr;

    }
    
}
void solve() {
        int m;
        cin>>m;
    // cout<<cnt;
     cout<<curr[m]<<"\n";
    // cout<<v.size();


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    make();

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}