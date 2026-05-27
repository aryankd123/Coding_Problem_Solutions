#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
string n;
cin>>n;
int count=0;

int digit_sum=0;

if(n.size()==1){cout<<0;return;}
for(int i=0;i<n.size();i++){
    
digit_sum+=n[i]-'0';
}
count++;

while(digit_sum/10>0){
    int new_n=digit_sum;
    digit_sum=0;
    while(new_n){
    digit_sum+=new_n%10;
    new_n=new_n/10;
    }
    count++;
  
}


 cout<<count;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}