#include <bits/stdc++.h>
using namespace std;
typedef pair<int ,int> pi;

void solve() {
   int n;
   cin>>n;
    vector<pi>vp;

   for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    pi pp={y,x};
    vp.push_back(pp);

   } 

sort( vp.begin(),vp.end());

vector<int>cpy;
for(int i=0;i<n;i++){
    cpy.push_back(vp[i].first);
}


vector<int>maxi(n,INT_MIN);
maxi[n-1]= vp[n-1].second;

for(int i=n-2;i>=0 ;i--){
    int x=vp[i].second;
    maxi[i]=max(maxi[i+1],x);
}



int q;
cin>>q;

while(q--){
    int t;
    cin>>t;
    int idx = upper_bound( cpy.begin(),cpy.end() , t)- cpy.begin();
    cout<<maxi[idx]<<"\n";
}


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