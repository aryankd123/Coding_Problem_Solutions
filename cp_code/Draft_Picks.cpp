#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n,0);
    int pnt=k;
    while(pnt>0){

    for(int i=0;i<n;i++){
       if(pnt>0) {v[i]+=pnt;
        pnt--;}
    }
    for(int i=n-1;i>=0;i--){
        if(pnt>0){v[i]+=pnt;
        pnt--;}
    }
}
int ans=0;
for(int i=0;i<n;i++){
    ans=max(ans,v[i]);

}
cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}