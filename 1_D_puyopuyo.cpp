#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
        if(st.size()>=4){
            vector<int>v;
             set<int>ss;
            for(int k=0;k<4;k++){
               ss.insert(st.top());
                int flag =st.top();
                st.pop();
                v.push_back(flag);

            }
            reverse(v.begin(),v.end());
            if(ss.size()==1)continue;
            for(int k=0;k<4;k++){
                st.push(v[k]);

            }
            
        }
    }
     if(st.size()>=4){
            vector<int>v;
             set<int>ss;
            for(int k=0;k<4;k++){
               ss.insert(st.top());

                int flag =st.top();
                st.pop();
                v.push_back(flag);

            }
              reverse(v.begin(),v.end());
            if(ss.size()!=1){
            for(int k=0;k<4;k++){
                st.push(v[k]);
                
            }
        }
        }
        cout<<st.size();
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}