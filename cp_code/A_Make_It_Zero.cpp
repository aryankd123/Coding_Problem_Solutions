#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}

if(n%2==0){
    cout<<2<<'\n';
    cout<<1<<" "<<n<<'\n';
    cout<<1<<" "<<n<<'\n';
}
else {
    cout<<4<<'\n';
    cout<<1<<" "<<n-1<<'\n';
    cout<<1<<" "<<n-1<<'\n';
    cout<<2<<" "<<n<<'\n';
    cout<<2<<" "<<n<<'\n';
}

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}