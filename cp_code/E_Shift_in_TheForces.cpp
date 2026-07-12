#include <bits/stdc++.h>
using namespace std;
#define int long long 

const int p1=31;
const int m1=1e9+9;

const int p2=37;
const int m2=1e9+13;

vector<int>power1(6e5+10,1);
vector<int>power2(6e5+10,1);

bool check(string& s,int i,vector<int> &hash1,vector<int>& hash2,int len,int best_idx){

int n=hash1.size();
int l=0;
int r=len;
int flag=-1;
int mid=l+(r-l)/2;
while(l<=r){
mid=l+(r-l)/2;
if(((hash1[mid+i-1]-hash1[i-1]+m1)%m1*(power1[n-i])%m1)%m1==(hash1[mid+best_idx-1]-hash1[best_idx-1]+m1)%m1*(power1[n-best_idx]%m1)%m1    
&& ((hash2[mid+i-1]-hash2[i-1]+m2)%m2*(power2[n-i])%m2)%m2==(hash2[mid+best_idx-1]-hash2[best_idx-1]+m2)%m2*(power2[n-best_idx]%m2)%m2){
flag= mid;
l=mid+1;
}
else r=mid-1;

}

if(flag<len && s[i+flag-1]<s[best_idx+flag-1]){
    return 1;

}
return 0;

}




void construct(){
for(int i=1;i<=6e5+5;i++){
    power1[i]=(power1[i-1]*p1)%m1;
    power2[i]=(power2[i-1]*p2)%m2;
}
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    s.append(s);
    int nn=s.size();
    vector<int> hash1(nn+2,0);
    vector<int> hash2(nn+2,0);

    for(int i=0;i<nn;i++){
        hash1[i+1]=(hash1[i]%m1+((s[i]-'a'+1)*power1[i])%m1)%m1;
        hash2[i+1]=(hash2[i]%m2+((s[i]-'a'+1)*power2[i])%m2)%m2;

    }


int best_idx=1;

for(int i=2;i<=n;i++){
    if(check(s,i,hash1,hash2,n,best_idx))best_idx=i;
}

string final="";
for(int i=best_idx-1;i<best_idx+n-1;i++){
final.push_back(s[i]);
}
cout<<final;

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