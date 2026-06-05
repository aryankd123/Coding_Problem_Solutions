#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n,a,b;
   cin>>n>>a>>b;
  string v;
  cin>>v;

   vector<int>cnt_a(n+1,0);
   vector<int>cnt_b(n+1,0);
   int aa=0;
   int bb=0;
   for(int i=1;i<=n;i++){
    if(v[i-1]=='a')aa++;
    else bb++;
    cnt_a[i]=aa;
    cnt_b[i]=bb;

   }

int l=1;
int ans=0;

while(l<=n){
    auto it=lower_bound(cnt_b.begin()+l, cnt_b.end(),b+cnt_b[l-1]);
    // auto it2=it;
    // it2--;
    int flag =distance(cnt_b.begin(),it);

    auto it3=lower_bound(cnt_a.begin()+l,cnt_a.end(),a+cnt_a[l-1]);

    int flag2= distance(cnt_a.begin(),it3);

  if(flag2<flag)   ans+=flag-flag2;


l++;
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