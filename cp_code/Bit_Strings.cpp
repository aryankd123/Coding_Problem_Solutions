#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int mod=1e9+7;
// const int lowest = -1e6 ;
// const int highest= 1e6 ;
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
const int lowest = -1e6 ;
const int highest= 1e6 ;
int power(long long x, unsigned int y, unsigned int  p)
{
    int res = 1;
    while (y > 0) {
        if (y % 2 == 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x); }
    return res % p;
}


void solve(){

int n;
cin>>n;
int ans=power(2,n,1e9+7);
cout<<ans;
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}