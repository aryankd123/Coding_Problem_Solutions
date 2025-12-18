#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =998244353;
 
 vector<int>factorial(200010,1);
 
void fact( ){
    int flag=1;

for(int i=1;i<200010;i++){
flag=(flag*i)%M;
factorial[i]=flag;

}
}

void swap(char & x){
    if(x=='0')x='1';
    else x='0';

}
void solve(){
string v;
cin>>v;
int n=v.size();
int pnt =0;
char flag='0';
char start ='0';
int no_max=0;

for(int i=0;i<n;i++){
    if(v[i]==flag){pnt++; swap(flag);}


    }
    
    no_max=max(no_max,pnt);

flag='1';
pnt =0;
for(int i=0;i<n;i++){
    if(v[i]==flag){pnt++; swap(flag);}


    }
if(pnt>no_max)start='1';
no_max=max(no_max,pnt);

cout<<n-no_max<<" ";

int ans=factorial[n-no_max];

int l=0;
int r=0;

while(r<n){
    while(v[r]==v[l])r++;
    ans=(ans*(r-l))%M;
    l=r;
}
cout<<ans<<"\n";
// int l=0;
// while(v[l]!=start)l++;
// if(l>0)ans=(ans*factorial[l])%M;
// int r=l;

 
// // int r=l;

// int sec_flag=r;
// int ff=0;
// while(r<n){
//     while(v[sec_flag]==v[r]){
//         sec_flag++;


//     }
//     if(sec_flag-r>1)ff++;
//     ans=(ans*factorial[sec_flag-r])%M;
//     r=sec_flag;
// }

// cout<<(ans*factorial[ff])%M<<"\n";




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
//precompute()
//factorial();
//inverses();
fact();
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}