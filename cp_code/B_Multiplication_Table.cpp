#include <bits/stdc++.h>
using namespace std;
#define int long long
 //int best =0;
bool calc(int n,int X,int k){
    int sum=0;
    for(int i=1;i<=n;i++){
      
   sum+=min(n,X/i-1);
        if(X/i==0)break;
    }
    return sum<=k;
}
int bin_search(int n,int k){
    int l=-1;
    int r=n*n+10;
    while(l+1<r){
        int m=(l+r)/2;
        //best =m;
        if(calc(n,m,k)) r=m;
        else l=m;
    }
    return l;
}
void solve(){

int n,k;
cin>>n>>k;
int ans=bin_search(n,k);
cout<<ans;


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}