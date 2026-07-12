#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int>maxi(n+1,INT_MIN);
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }

    

    vector<int>L(n,-1);
    vector<int>R(n,n);

    stack<int>str;
    stack<int>stl;

    for(int i=0;i<n;i++){
        int x=v[i];
        while(!str.empty() && x<v[str.top()]){
            int idx=str.top();
            str.pop();
            R[idx]=i;
        }
        str.push(i);
        
    }

     for(int i=n-1;i>=0;i--){
        int x=v[i];
        while(!stl.empty() && x<=v[stl.top()]){
            int idx=stl.top();
            stl.pop();
            L[idx]=i;
        }
        stl.push(i);
        
    }
// int ans=0;

    for(int i=0;i<n;i++){
        int contl=i-L[i];
        int contr=R[i]-i;
        int length=contl+contr-1;
        maxi[length]=max(maxi[length],v[i]);

    }
    for(int i=n-1;i>=1;i--){
        maxi[i]=max(maxi[i],maxi[i+1]);
    }
    for(int i=1;i<=n;i++){
        cout<<maxi[i]<<" ";
    }
    


}







int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}