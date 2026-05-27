#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6+10 ;
int arr[highest];

void precompute() {
    for (int i = 1; i < highest; i++) {
        arr[i] = 0;
    }
    
    for (int i = 1; i < highest; i++) {
        for (int j = i; j < highest; j += i) {
            arr[j]++;
        }
    }
}
void solve(){
int a,b;
cin>>a>>b;
int g=__gcd(a,b);
cout<<arr[g]<<'\n';
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
precompute();
while (t--){
solve();
}
    return 0;
}