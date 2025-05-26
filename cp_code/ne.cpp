#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
using namespace std;
typedef long long int lli;
int ans(int n,int k,int N){
for (int n = 0; n < N; n++) { // loop over n from 0 to N-1 (inclusive)
       C[n][0] = 1;
       C[n][n] = 1;
        for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
            C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
    }
    cout<<C[n][k];}
void solve(){





} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}