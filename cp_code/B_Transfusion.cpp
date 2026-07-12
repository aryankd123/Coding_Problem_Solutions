#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    int n;
    cin>>n;
    vector<long double>v;
    for(int i=0;i<n;i++){
        long double x;
        cin>>x;
        v.push_back(x);

    }
int  n_odd=n/2;
int n_even=n/2;

if(n%2!=0){n_odd+=1;}

int  odd=0;
int even =0;
for(int i=0;i<n;i+=2){
    odd+=v[i];
}
for(int j=1;j<n;j+=2){
    even+=v[j];
}
if( odd%n_odd==0 && even%n_even==0 && odd/n_odd == even/n_even)cout<<"YES\n";
else cout<<"NO\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}