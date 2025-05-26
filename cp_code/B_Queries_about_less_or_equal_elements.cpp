#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
void solve(){
int n,m;
cin>>n>>m;

vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
sort(v.begin(),v.end());
vector<int> v1;
for(int i=0;i<m;i++){
int x;
cin>>x;
v1.push_back(x);
}
for(int i=0;i<m;i++){


    auto it = upper_bound(v.begin(), v.end(), v1[i]);


    int index = it - v.begin();
    cout<<index <<" ";

}


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}