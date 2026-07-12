#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
int red=0;
int blue=0;

int rr_max=INT_MIN;
int bb_max=INT_MAX;

    for(int i=0;i<n;i++ ){
        if(v[i]>0){
            red+=v[i];
            blue-=v[i];

        }
        else {

            blue+= (-v[i]);
            red-=(-v[i]);
        }

       
    }
    if(k>= red-blue)cout<<"Yes\n";
    else cout<<"No\n";

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