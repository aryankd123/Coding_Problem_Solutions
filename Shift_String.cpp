#include <bits/stdc++.h>
using namespace std;

vector<int>z_fn(string s){
    int n=s.size();

vector<int>z(n,0);

int l=0;
int r=0;

for(int i=1;i<n;i++){

if(i<=r){
    z[i]=min(r-i+1,z[i-l]);
}

    while(i+z[i] <n && s[z[i]]==s[i+z[i]]){
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
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();

    for(int i=0;i<n;i++){
        a.push_back(a[i]);
    }
    string cpy=b;
    cpy.push_back('$');
    cpy.append(a);
vector<int>flag=z_fn(cpy);
for(int i=0;i<cpy.size();i++){
    if(flag[i]==m){cout<<i-m-1<<"\n";return ;}
}
cout<<"-1\n";

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