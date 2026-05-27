#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;

long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base = base % mod;
    while (exp > 0) {
        // If exp is odd, multiply base with result
        if (exp % 2 == 1) 
            res = (res * base) % mod;
        
        // exp must be even now
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return res;
}

// Function to find modular inverse of b under modulo M
// (NOTE: This only works if M is prime!)
long long modInverse(long long b, long long M) {
    return power(b, M - 2, M);
}

// Function to calculate (a / b) % M
long long modDivide(long long a, long long b, long long M) {
    // a is already a % M as per your conditions
    long long inv = modInverse(b, M);
    
    // Multiply 'a' with the inverse of 'b'
    return (a * inv) % M;
}
void solve() {
   int n;
   cin>>n;
   int nn=(n*(n+1)) /2;
   if(nn%2!=0){cout<<0;return ;}
nn=nn/2;

   vector<vector<int>>dp(n+1,vector<int>(nn+1,0));
   dp[0][0]=1;

   for(int i=1;i<=n;i++){
    for(int j=0;j<=nn;j++){
        dp[i][j]=dp[i-1][j];
       if(j-i>=0) dp[i][j]=(dp[i][j]%M+dp[i-1][j-i]%M)%M;

    }
   }
//    int ans=0;
//    for(int  i=1;i<=n;i++){ans+=dp[i][nn];}
  cout<< modDivide(dp[n][nn],2,M);
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