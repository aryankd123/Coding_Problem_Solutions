#include <bits/stdc++.h>
using namespace std;




int lis(vector<int>&v){
    vector<int>flag;
    int n=v.size();

    for(int i=0;i<n;i++){
        int x=v[i];
        auto it=lower_bound(flag.begin(),flag.end(),x);
        if(it==flag.end()){flag.push_back(x);}
        else *it=x;
    }
    return flag.size();


}
void solve() {
       int n;
   cin>>n;
//    vector<int>ans;




   vector<int>s1(n,0);
   vector<int>s2(n,0);
map<int,int>mp;
vector<int>flag;

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s1[i]=x;
    mp[x]=i;
   }

   for(int j=0;j<n;j++){
    int x;
    cin>>x;
    s2[j]=x;
    flag.push_back(mp[x]);
    
}
cout<<2*(n-lis(flag))<<"\n";





// vector<vector<int>>dp(n+1,vector<int>(n+1,0));
//     for(int i=n-1;i>=0;i--){
//     // vector<int>curr(m+1,0);
//         for(int j=n-1;j>=0;j--){
//             if(s1[i]==s2[j]){
//                 if(i+1<n && j+1<n )dp[i][j]=dp[i+1][j+1];
//                 dp[i][j]++;
//             }
//             else {
//                 if(i+1<n)dp[i][j]=max(dp[i+1][j],dp[i][j]);
//                 if(j+1<n)dp[i][j]=max(dp[i][j+1],dp[i][j]);

//             }
//             // ans=max(ans,dp[i][j]);

//         }
//         // prev=curr;
//     }
//  int i=0;
//  int j=0;
//  while(i<s1.size() && j<n){
//     if(s1[i]==s2[j]){flag.push_back(s1[i]);i++;j++;}
//     else if(dp[i+1][j]>=dp[i][j+1])i++;
//     else j++;
//  }
// cout<<2*(n-flag.size())<<"\n";



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