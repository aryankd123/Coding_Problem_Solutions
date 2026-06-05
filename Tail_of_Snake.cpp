#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;

for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v1.push_back(x);

}
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v2.push_back(x);

}
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v3.push_back(x);

}


    vector<int>p1(n+1,0);
    vector<int>p2(n+1,0);
    vector<int>s3(n+1,0);

    s3.push_back(0); 

    for(int i=1;i<=n;i++){
        p1[i]=p1[i-1]+v1[i-1];
    }

    for(int i=1;i<=n;i++){
        p2[i]=p2[i-1]+v2[i-1];
        //  if(i==n)p2[i]=p2[i-1];
    }
    // p2[0]=0;
    // s3[n]=v3[n-1];
    for(int i=n;i>0;i--){
        s3[i]=s3[i+1]+v3[i-1];
    }

    vector<int>maxi(n+1,0);
    maxi.push_back(0);

    int flag =INT_MIN;
    for(int i=n-1;i>=1;i--){ 
    flag =max(flag,p2[i]+s3[i+1]);
    maxi[i]=flag ;


    }



    int ans=0;
    for(int i=1;i<=n-2;i++){
        int val=0;

         val +=p1[i];
         val-=p2[i];
         val+=maxi[i+1];

        ans=max(ans,val);
    }
cout<<ans;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}