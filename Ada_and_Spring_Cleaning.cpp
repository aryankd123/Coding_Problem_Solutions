#include <bits/stdc++.h>
using namespace std;
#define int long long 
typedef pair<int,int> pi;

const int m=1e9+11;
const int m2=1e9+13;

const int p= 31;
const int p2=37;


vector<int>prod(1e5+10,1);
vector<int>prod2(1e5+10,1);


void construct(){
    for(int i=1;i<=1e5+5;i++){
        prod[i]=(prod[i-1]*p)%m;
        prod2[i]=(prod2[i-1]*p2)%m2;


    }
}

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    // int n=s.size();

    cin>>s;

    set<pi>st;

    vector<int>hash(n+2,0);
    vector<int>hash2(n+2,0);


    for(int i=0;i<n;i++){
        hash[i+1]=(hash[i]%m+((s[i]-'a'+1)*prod[i])%m)%m;

        hash2[i+1]=(hash2[i]%m2+((s[i]-'a'+1)*prod2[i])%m2)%m2;

    }
    for(int i=1;i<=n;i++){
        if(i+k-1<=n){
        int f1= ((hash[i+k-1]-hash[i-1]+m)%m*(prod[n-i])%m)%m;
        int f2= ((hash2[i+k-1]-hash2[i-1]+m2)%m2* (prod2[n-i])%m2)%m2;
            st.insert ({f1,f2});
        }


    }
    cout<<st.size()<<"\n";



}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    construct();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}