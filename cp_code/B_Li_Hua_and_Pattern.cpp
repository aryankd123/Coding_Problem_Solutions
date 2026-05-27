#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
//***prefix xor function for prefix xor from 1 to a****
//int xor_ret(int a){
//if(a%4==0)return a;
//if (a%4==1)return 1;
//if(a%4==2)return a+1;
//return 0;
//}
void solve(){
int n,k;
cin>>n>>k;
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
        arr[i][j]=x;
    }
}
set<pair<int,int>> st;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i][j]!=arr[n-1-i][n-1-j]  && st.find({i,j})==st.end()){k--;st.insert({n-i-1,n-j-1});}
    }
}

if(k<0){cout<<"NO\n";return;}
else {
    if(k%2==0 || n%2!=0){cout<<"YES\n";return;}
    else {cout<<"NO\n";return;}
}

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}