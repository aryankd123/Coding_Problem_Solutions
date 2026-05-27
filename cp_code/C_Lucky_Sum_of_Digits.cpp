#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n;
cin>>n;
int rem=n%7;
int div=n/7;
int rem4=n%4;
if(n==1||n==2||n==3||n==5||n==6){cout<<-1;return;}
else if(div-rem>=0){
    for(int i=1;i<=2*rem;i++)cout<<4;
    for(int i=1;i<=(div-rem);i++)cout<<7;
}

else if(rem4==0){
    for(int i=1;i<=n/4;i++)cout<<4;
}
else if(rem4==3){for(int i=1;i<=(n/4-1);i++)cout<<4;
                cout<<7;}
else if(rem4==2 && n>=14){
    for(int i=1;i<=n/4-3;i++)cout<<4;
    cout<<77;
 
}
else if(rem4==1 && n>=21 ){
    for(int i=1;i<=(n-21)/4;i++)cout<<4;
    cout<<777;
}

else cout<<-1;




}

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}





signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
solve();

    return 0;
}