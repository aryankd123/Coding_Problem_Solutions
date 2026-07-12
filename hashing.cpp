#include <bits/stdc++.h>
using namespace std;
#define int long long 

const int p=37;
const int m=1e9+13;

const int p2 =31;
const int m2 =1e9+37;


vector<int> power(3e5+10,1);
vector<int> power2(3e5+10,1);

void construct(){
for(int i=1;i<3e5+5;i++){
    power[i]=((power[i-1]%m)*(p%m))%m;

}
}

void construct2(){
for(int i=1;i<3e5+5;i++){
    power2[i]=((power2[i-1]%m2)*(p2%m2))%m2;

}
}






void solve() {
    string s;
    cin>>s;
    int n=s.size();

    int q;
    cin>>q;
    vector<int> hash(n+2,0);
    vector<int> hash2(n+2,0);
    for(int i=0;i<n;i++){
        hash[i+1]=(hash[i]%m+((s[i]-'a'+1)%m*power[i]%m)%m)%m;

    }
     for(int i=0;i<n;i++){
        hash2[i+1]=(hash2[i]%m2+((s[i]-'a'+1)%m2*power2[i]%m2)%m2)%m2;

    }


    while(q--){
        int x,y;
        cin>>x>>y;
        // x;
        // y;
        int h1 =( (hash[y] - hash[x]+m)%m * power[n-x] % m ) % m;
        int h2 = ((hash2[y] - hash2[x]+m2)%m2 * power2[n-x] % m2) % m2;
        int ans=((h1<<31) ^(h2));
        cout<<ans<<"\n";

    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  construct();
  construct2();

        solve();
    // }
    
    return 0;
}