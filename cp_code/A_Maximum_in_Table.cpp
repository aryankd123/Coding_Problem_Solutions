#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n;
cin>>n;
int arr[n][n];
// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         arr[i][j]=0;
//     }
// }
for(int j=0;j<n;j++){
    arr[0][j]=1;
}
for(int i=0;i<n;i++){
    arr[i][0]=1;
}
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        arr[i][j]=arr[i-1][j]+arr[i][j-1];
    }
}
cout<<arr[n-1][n-1];

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}