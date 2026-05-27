#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
#include <unordered_map>
#include<map>
#include<unordered_set>
#include <set>
using namespace std;
typedef long long int lli;
void solve(){
int n,k;
cin>>n>>k;
if(n==1&& k==1)cout<<1<<endl<<1<<endl;
else if(k==1&& n!=1) cout<<-1<<endl;
else if(n==k && n!=1)cout<<-1<<endl;
else if(k%2==0)cout<<3<<endl<<1<<" "<<k<<" "<<k+1<<endl;

else if(k%2!=0 ){
    cout<<5<<endl<<1<<" "<<k-1<<" "<<k<<" "<<k+1<<" "<<n<<endl;
   
    }

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}