#include <bits/stdc++.h>
using namespace std;
//#define int long long
// const int lowest = -1e6 ;
// const int highest= 1e6 ;
void solve(){
int n;
cin>>n;


//vector<int> v;
int count_odd=0;
int count_even=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
if(x%2==0)count_even++;
else count_odd++;
//v.push_back(x);
}
if(n%2!=0){cout<<-1<<'\n';return;}
//if(count_even==0|| count_odd==0){cout<<n/2<<'\n';return;}
cout<<abs(count_even-count_odd)/2<<'\n';
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