#include <bits/stdc++.h>
using namespace std;
#define int long long 
typedef pair<int,int> pi;

const int m=1e9+7;
const int m2=1e9+9;

const int p= 31;
const int p2=37;


vector<int>prod(1e4+10,1);
vector<int>prod2(1e4+10,1);


void construct(){
    for(int i=1;i<=1e4+5;i++){
        prod[i]=(prod[i-1]*p)%m;
        prod2[i]=(prod2[i-1]*p2)%m2;


    }
}

void solve() {
    string s;
    cin>>s;
    string flag;
    cin>>flag ;
    int n=s.size();
    int k;
    cin>>k;

    vector<int>prefix(n+1,0);
    int sum=0;

    for(int i=1;i<=n;i++){
        prefix[i]+=prefix[i-1];
        int c=s[i-1]-'a';
        if(flag[c]-'0'==0) prefix[i]++;;

    }

    vector<int>hash(n+2,0);
    vector<int>hash2(n+2,0);


    for(int i=0;i<n;i++){
        hash[i+1]=(hash[i]%m+((s[i]-'a'+1)*prod[i])%m)%m;

        hash2[i+1]=(hash2[i]%m2+((s[i]-'a'+1)*prod2[i])%m2)%m2;

    }
    set<pi> st;

    for(int len=1;len<=n;len++){
        for(int i=1;i<=n;i++){
            if(len+i-1<=n){
                if(prefix[i+len-1]-prefix[i-1]<=k){
            int fl1= ((hash[i+len-1]-hash[i-1]+m)%m* prod[n-i]%m)%m;

            int fl2= ((hash2[i+len-1]-hash2[i-1]+m2)%m2* prod2[n-i]%m2)%m2;

                st.insert({fl1,fl2});


                }
            }
        }
    }

cout<<st.size();




}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    construct();
  
        solve();
    
    
    return 0;
}