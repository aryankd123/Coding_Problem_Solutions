#include <bits/stdc++.h>
using namespace std;

void solve() {
   string s,t;
   cin>>s>>t;
   int n=s.size();
    vector<vector<int>>v(n+2,vector<int>(26,n+1));
    // for(int i=0;i<26;i++){
    //     v[n+1][i]=n+1;
    //     v[0][i]=1;
    // }
    
    for(int i=n-1;i>=0;i--){
        v[i]=v[i+1];
        v[i][s[i]-'a']=i;
    }

    long long  ans=0;
   int l=0;
   int n2=t.size();

   while(l<n){
    bool found=1;

    int next=l;
    // int ct=0;
    for(int i=0;i<n2;i++){
        if(next>=n){found =0;break;}
        
        int flag=t[i]-'a';
        next=v[next][flag];
        if(next==n + 1) { 
                found = false; 
                break; 
            }
            
            if (i<n2-1) {
                next++;
            }

    }
    if(next>=n || found ==0){ans+=(n-l);}
    else ans+=next-l;
    l++;
   }
   cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  
        solve();
    
    return 0;
}