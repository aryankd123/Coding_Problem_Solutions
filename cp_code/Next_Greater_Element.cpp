#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n;
cin>>n;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
vector<int> nge(n);

stack<int> st;
for(int i=0;i<v.size();i++){

while(!st.empty() && v[st.top()]<v[i]) {nge[st.top()]=i;
st.pop();


}
st.push(i);

}
//cout<<st.top();
while(!st.empty()){
    nge[st.top()]=-1;
    st.pop();
}
for(int j=0;j<nge.size();j++){
    cout<<v[j]<<" ";if((nge[j])!=-1)cout<<v[nge[j]]<<endl;else cout<<-1<<endl;
}




} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}