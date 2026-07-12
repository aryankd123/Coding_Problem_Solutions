#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int p=31;
const int m =1e9+101;

vector<int>power(2e6+10,1);


void construct(){
    for(int i=1;i<2e6+5;i++){
        power[i]=((power[i-1]%m)*(p%m))%m;
    }
}





bool check(vector<int>& hash,int l1,int l2, int len,string & s){
    int n=hash.size();
    
     int ans=-1;

int mid= len/2;
int left=0;
int right=len;

while(left<=right){
mid=left +(right-left)/2;

if(((hash[l1+mid-1]-hash[l1-1]+m)%m*(power[n-l1]%m))%m == ((hash[l2+mid-1]-hash[l2-1]+m)%m*(power[n-l2]%m))%m){
    ans=mid;
    left= mid+1;
 
}
else { right=mid-1;}

}

if(ans<len && s[l2+ans-1]<s[l1+ans-1]){
return 1;
}
return 0;


}





void solve() {
    string s;
    cin>>s;
    string flag=s;
    int n=s.size();

    s.append(s);
    int nn=s.size();
    vector<int>hash(nn+1,0);
    for(int i=0;i<nn;i++){
        hash[i+1]=(hash[i]%m+((s[i]-'a'+1)%m * power[i]%m)%m)%m;

    }
    int best_idx =1;
    for(int i=2 ;i+n-1<=nn;i++){
        if(check(hash,best_idx,i,n,s))best_idx=i;

    }
string ans= "";
for(int i=best_idx-1;i<best_idx+n-1;i++){
    ans.push_back(s[i]);

}
cout<<ans;
    
}

signed  main() {
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