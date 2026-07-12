#include <bits/stdc++.h>
using namespace std;
#define int long long 
typedef pair<int,int> pi ;

const int p=31;
const int m =1e9+101;

const int p2= 37;
const int m2= 1e9+11;

vector<int> power(1e3+10,1);
vector<int> power2(1e3+10,1);


void construct(){
for(int i=1;i<=1e3+5;i++){
    power[i]=(power[i-1]*p)%m;
    power2[i]=(power2[i-1]*p2)%m2;
}

}

pi hasher(string &s){
    int n=s.size();
    int flag=0 ;
    int flag2=0 ;

    for(int i=0;i<n;i++){
    flag=(flag*10+(s[i]-'0'))%m;
    flag2=(flag2*10 +(s[i]-'0'))%m2;

}
return make_pair(flag,flag2);

}


void solve() {
    int n;
    cin>>n;
   map<pi,int>mp;

   vector<int> hash(n+2,0);
   vector<int> hash2(n+2,0);




vector<pi>vp;


for(int i=0;i<n;i++){
         string s;
            cin>>s;
            pi hashi=hasher(s);
            vp.push_back(hashi);

        mp[hashi]++;
  

    }
int nn =vp.size();
int ans=0;

 for(int i=0;i<nn;i++){
    for(int j=0;j<nn;j++){
        int fl1=(vp[i].first*vp[j].first)%m;

        int fl2=(vp[i].second*vp[j].second)%m2;

        if(mp.find({fl1,fl2})!=mp.end()){
            int valid_c = mp[{fl1, fl2}];

ans += valid_c;
        }
    }
 }
 cout<<ans;



}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    construct();


    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}