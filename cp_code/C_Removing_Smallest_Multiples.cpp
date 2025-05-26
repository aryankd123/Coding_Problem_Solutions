#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6+10 ;
//Precompute divisors(add precompute() to main)
//int arr[highest];
void precompute(const string &s,int& ans,int n) {
    // for (int i = 1; i < highest; i++) {
    //     arr[i] = 0;}
       bool visited[highest] = {0}; 
        //set<int> st;
        for (int i = 1; i <=n; i++)
         {for (int j = i; j <=n; j += i) {
            if(s[j-1]=='1')break;
            else {
                if(visited[j-1]==0){ans+=i;visited[j-1]=1;}
                }
                } 
                    }
                    }
void solve(){
int n;
cin>>n;
string s;
cin>>s;
int ans=0;
precompute(s,ans,n);
cout<<ans<<'\n';
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