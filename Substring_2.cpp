#include <bits/stdc++.h>
using namespace std;

int min_dis(char s1,char s2){
    int first =s1-'0';
    int second=s2-'0';
    if(second>first)return 9-second+1+first;
    return first-second;
}
void solve() {
    int n,m;
    cin>>n>>m;
    string s1;
    string s2;
    cin>>s1>>s2;
    
    int ans=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(i+m-1<n){
            int k=0;
            int flag =0;

            for(int k=i;k<i+m;k++){
                flag+=min_dis(s1[k],s2[k-i]);
            }
            ans=min(ans,flag);
        }
    }
    cout<<ans;
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