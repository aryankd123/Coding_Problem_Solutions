#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9;

void solve(){
int n;
cin>>n;
vector<int> x1;
vector<int> y1;
int ss=LLONG_MIN;
int sd=LLONG_MIN;
int p=0;
int q=0;

for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;

x1.push_back(x);
y1.push_back(y);
ss=max(ss,x+y);
sd=max(sd,x-y);

}

int ansx;
int ansy;

cout<<"? U "<<M<<endl;
cin>>p;
cout<<"? U "<<M<<endl;
cin>>p;
cout<<"? R "<<M<<endl;
cin>>p;
cout<<"? R "<<M<<endl;
cin>>p;
cout<<"? R "<<M<<endl;
cin>>p;
ansx=p+ss+sd-11*M;

cout<<"? D "<<M<<endl;
cin>>q;
cout<<"? D "<<M<<endl;
cin>>q;
cout<<"? D "<<M<<endl;
cin>>q;
cout<<"? D "<<M<<endl;
cin>>q;
cout<<"? D "<<M<<endl;
cin>>q;

ansy=-q+ss-sd+M;

ansx+=q;
ansy+=p;

cout<<"! "<<ansx/2<<" "<<ansy/2<<endl;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
//factorial();
//inverses();
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}