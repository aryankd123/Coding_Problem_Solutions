#include <bits/stdc++.h>
using namespace std;
#define int long long
// const int lowest = -1e6 ;
// const int highest= 1e6 ;
void solve(){
int n,k;
cin>>n>>k;

set<int>st;
for(int i=1;i*i<=n;i++){
if(n%i==0){
    st.insert(i);
    st.insert(n/i);
}


}
auto it =st.begin();
advance(it, k - 1);
if (it != st.end()){
    cout<<*it;

}
else cout<<-1;


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
solve();

    return 0;
}