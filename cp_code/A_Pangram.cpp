#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){

int arr[26];
for(int i=0;i<26;i++){
    arr[i]=0;
}
int n;
cin>>n;
while (n--){
    char i;
    cin>>i;
    int j=i;
    if(65<=j&& j<=90) arr[j-65]++;
    else arr[j-97]++;
}
int flag=0;
for(int i=0;i<26;i++){
    if(arr[i]==0)flag++;
}
if(flag==0)cout<<"YES";
else cout<<"NO";
//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


solve();

    return 0;
}