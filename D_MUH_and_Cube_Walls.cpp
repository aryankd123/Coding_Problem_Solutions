#include <bits/stdc++.h>
using namespace std;

vector<int>z_fn(vector<int> & v){
    int n=v.size();
    vector<int>z(n,0);
    int l=0;
    int r=0;
    
    for(int i=1;i<n;i++){
        if(i<=r){
            z[i]=min(r-i+1,z[i-l]);
        }

        while(i+z[i]<n && v[z[i]]==v[i+z[i]])z[i]++;

        if(i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;
        }
        
    }
    return z;
}
void solve() {
    int n,m;
    cin>>n>>m;
    
    vector<int>v;
    vector<int>v2;
    vector<int> s;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);


    }
   

    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        v2.push_back(x);

    }

    for(int j=0;j<m-1;j++){
        s.push_back((v2[j]-v2[j+1]));

    }
    s.push_back(2e9+10);
     for(int i=0;i<n-1;i++){
        s.push_back((v[i]-v[i+1]));

    }

if(m==1){cout<<n;return;}
    int flag =0;
    vector<int>ans=z_fn(s);


    for(int i=1;i<ans.size();i++){
        if(ans[i]==m-1)flag++;
    }
    cout<<flag ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

        solve();

    
    return 0;
}