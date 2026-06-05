#include <bits/stdc++.h>
using namespace std;
vector<int>z_fn(string & s){
    int l=0;
    int r=0;
    int n=s.size();
    vector<int>z(n,0);
    for(int i=1;i<n;i++){
        if(i<=r){
            z[i]=min(r-i+1,z[i-l]);

        }
        while(i+z[i]<n && s[z[i]]==s[i+z[i]]){
            z[i]++;
        } 
        if(i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;
    
        }
    }
    return z;

}
void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//     freopen("Periodic_Strings.cpp","r",stdin);
//    freopen("Periodic_Strings.cpp","w",stdout);
    int t;
    cin >> t;
   for(int j=0;j<t;j++){
       string s;
    cin>>s;
    int n=s.size();

    vector<int>ans=z_fn(s);
    // cout<<n<<endl;
    bool flag =0;
    for(int i=1;i<n;i++){
        if( (n%i==0) && i+ans[i]==n){cout<<i;flag=1;break ;}
    }
    // if(flag==0)cout<<n;

    if(j!=t-1)cout<<"\n";
    }
    
    return 0;
}