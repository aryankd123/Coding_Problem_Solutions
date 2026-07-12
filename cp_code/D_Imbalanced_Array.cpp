#include <bits/stdc++.h>
using namespace std;
#define int long long 
void solve() {
       int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }



vector<int>L(n,-1);
    vector<int>R(n,n);

    stack<int>st;
    

    for(int i=0;i<n;i++){
        int x=v[i];
        while(!st.empty() && x<v[st.top()]){
            int idx=st.top();
            st.pop();
            R[idx]=i;
        }
        st.push(i);
        
    }
    while(!st.empty())st.pop();

     for(int i=n-1;i>=0;i--){
        int x=v[i];
        while(!st.empty() && x<=v[st.top()]){
            int idx=st.top();
            st.pop();
            L[idx]=i;
        }
        st.push(i);
        
    }
    while(!st.empty())st.pop();


int ans_min=0;

    for(int i=0;i<n;i++){
        int contl=i-L[i];
        int contr=R[i]-i;
        int total_c=contl* contr* v[i];
        ans_min+=total_c;

    }

    // maximum part

    for(int i=0;i<n;i++){
        L[i]=-1;
        R[i]=n;
        }




for(int i=0;i<n;i++){
        int x=v[i];
        while(!st.empty() && x>v[st.top()]){
            int idx=st.top();
            st.pop();
            R[idx]=i;
        }
        st.push(i);
        
    }
    while(!st.empty())st.pop();

     for(int i=n-1;i>=0;i--){
        int x=v[i];
        while(!st.empty() && x>=v[st.top()]){
            int idx=st.top();
            st.pop();
            L[idx]=i;
        }
        st.push(i);
        
    }
    while(!st.empty())st.pop();


int ans_max=0;

    for(int i=0;i<n;i++){
        int contl=i-L[i];
        int contr=R[i]-i;
        int total_c=contl* contr* v[i];
        ans_max+=total_c;

    }
    cout<<ans_max-ans_min;
    
   


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