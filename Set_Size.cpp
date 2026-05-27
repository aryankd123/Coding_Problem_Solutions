#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll>v;
    set<ll>st;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
       st.insert(x);
       
        
    }
  for(auto it:st){
      v.push_back(it);
  }
  vector<ll>diff;

    for(int i=0;i<v.size()-1;i++){
        diff.push_back(v[i+1]-v[i]);
    }
    sort(diff.begin(),diff.end());
    vector<ll>prefix;
    ll sum=0;
    for(int i=0;i<diff.size();i++){
        sum+=diff[i];
        prefix.push_back(sum);
    }
    ll n2=prefix.size();
    
    while(q--){
        ll x;
        cin>>x;
        auto it=lower_bound(diff.begin(),diff.end(),x)-diff.begin();
        ll ans=0;
        ans+=prefix[it];
        ans+=(n2-it)*x;
        ans+=x;
        cout<<ans<<"\n";

    }
    
  
}
int main() {
    solve();
    
	// your code goes here

}
