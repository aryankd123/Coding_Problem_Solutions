#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
//***prefix xor function for prefix xor from 1 to a****
//int xor_ret(int a){
//if(a%4==0)return a;
//if (a%4==1)return 1;
//if(a%4==2)return a+1;
//return 0;
//}
void solve(){
int n,m;
cin>>n>>m;
string s;
cin>>s;

int arr[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     int x;
     cin>>x;
     arr[i][j]=x;}
}
vector<int> row_sum;
vector<int> col_sum;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<m;j++){
    sum+=arr[i][j];
}
row_sum.push_back(sum);
}
for(int j=0;j<m;j++){
    int sum=0;
    for(int i=0;i<n;i++){
    sum+=arr[i][j];
}
col_sum.push_back(sum);
}


pair<int,int> flag={0,0};

for(int i=0;i<s.length();i++){
    if(s[i]=='D'){arr[flag.first][flag.second]=-row_sum[flag.first];col_sum[flag.second]-=row_sum[flag.first];flag.first++;}
    else {arr[flag.first][flag.second]=-col_sum[flag.second];row_sum[flag.first]-=col_sum[flag.second];flag.second++;}

}
arr[n-1][m-1]=-row_sum[n-1];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
   
     cout<<arr[i][j]<<" ";}cout<<'\n';
}


//vector<int> v;





} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}