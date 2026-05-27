#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>pp;

void solve() {
    int t,x;
    cin>>t>>x;
    vector<pp>vp;

    pp last;
    for(int i=0;i<t+1;i++){
        int k;
        cin>>k;
        if(i==0){last={k,i};vp.push_back(last);}
        else {
            int l=last.first;
            if(abs(k-l)>=x){
                last={k,i};vp.push_back(last);
            }
        }
        
    }
    for(int i=0;i<vp.size();i++){
        cout<<vp[i].second<<" "<<vp[i].first<<"\n";
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