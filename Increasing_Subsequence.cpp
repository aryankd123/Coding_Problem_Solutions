#include <bits/stdc++.h>
using namespace std;

int ans(vector<int>& v){
    vector<int> flag;
    int n=v.size();

    for(int i=0;i<n;i++){
    if(i==0){flag.push_back(v[0]);}
    else {
        if(v[i]>flag.back())flag.push_back(v[i]);
        else {
            auto it=lower_bound(flag.begin(),flag.end(),v[i]);
            *it=v[i];

        }
    }
    }
    return flag.size();

}
void solve() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<ans(v);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        solve();
    
    
    return 0;
}