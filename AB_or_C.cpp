#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
void solve() {
    int n;
    cin>>n;
    vector<pi>v;
for(int i=0;i<n;i++){
int a,b,c;
cin>>a>>b>>c;
    v.push_back({a,i});
    v.push_back({b,i});
    v.push_back({c,i});

}

sort(v.begin(),v.end());
vector<int> flag(n,0);
int unique=0;

int start=0;
int last=0;
int ans = INT_MAX;
while(last<v.size()){
int x=v[last].first;
int pos=v[last].second;
if(flag[pos]==0){unique++;}

flag[pos]++;
while(unique>=n){

    ans=min(ans,v[last].first-v[start].first);
    flag[v[start].second]--;
    if(flag[v[start].second]==0 )unique--;

    start++;
    

    
}

last++;

}
cout<<ans<<"\n";





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