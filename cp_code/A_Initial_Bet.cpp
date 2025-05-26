#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int sum=0;

for(int i=0;i<5;i++){
    int x;
    cin>>x;
    sum+=x;

}
if(sum==0)cout<<-1<<endl;
else if(sum%5==0)cout<<sum/5;
else cout<<-1;


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}