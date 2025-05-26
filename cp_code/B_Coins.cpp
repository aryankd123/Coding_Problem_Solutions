#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
#include <unordered_map>
using namespace std;
typedef long long int lli;
void solve(){

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}

double n;
cin>>n;
cout << static_cast<int>(n) << " ";
while(n!=1){
    int n1=n/2;
    if(n1==(n/2)){
    
        for(int j=n1;j>=1;j--){
                            if(n1%j==0){cout<<j<<" ";n=j;break;}

                            }
                }
                
    else {int k=n;
        for(int j=k-1;j>=1;j--){
         if(k%j==0){cout<<j<<" ";n=j;break;}
    }

    }
            }


} 
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// int t;
// cin>>t;
// while (t--){
solve();
// }
    return 0;
}