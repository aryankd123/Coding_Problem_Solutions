#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
int n,m;
cin>>n>>m;

vector<int> v,v1;
vector<int> p(n+m+1);
vector<int> t(n+m+1);
for(int i=0;i<n+m+1;i++){
int x;
cin>>x;
v.push_back(x);
}
for(int i=0;i<n+m+1;i++){
int x;
cin>>x;
v1.push_back(x);


}

for(int i=0;i<n+m+1;i++){
    int res=0;
    int p1=0;
    int  t1=0;
    for(int j=0;j<n+m+1;j++){
        if(j!=i){
            if(p1<n && t1<m){
                res+=max(v[j],v1[j]);
                if(v[j]>=v1[j])p1++;
                else t1++;

            }
            else if(p1==n ){
                res+=v1[j];t1++;
            }
            else if(t1==m){
                res+=v[j];p1++;
            }

        }
    }

cout<<res<<" ";

}
cout<<'\n';
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}