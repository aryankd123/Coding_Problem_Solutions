#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>pi;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<pi>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        v.push_back({x,i});
    }
    sort(v.begin(),v.end());

    int p1;
    int p2;
    int p3;

    for(int i=0;i<n-2;i++){
        p1=i;
        int req=k-v[i].first;
        // int l=i+1;
        for(int l=i+1;l<n-1;l++){
            p2=l;
            int to=req-v[l].first;
           p3= lower_bound(v.begin()+l+1,v.end(),make_pair(to,-1))-v.begin();

           if(p3<n && v[p3].first==to){
            cout<<v[p1].second+1<<" "<<v[p2].second+1<<" "<<v[p3].second+1;
            return ;
           }

        }
    }
    cout<<"IMPOSSIBLE";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    
    return 0;
}