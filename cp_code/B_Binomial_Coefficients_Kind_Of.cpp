#include<iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include<cmath>
using namespace std;
typedef long long int lli;
const int M = 1e9 + 7;


int modExp(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (1LL * result * base) % mod; 
        }
        base = (1LL * base * base) % mod; 
        exp /= 2;
    }
    return result;
}
void solve(){

int n;
cin>>n;
vector <int> v1;
vector <int> v2;
for (int i=0;i<n;i++){
    int x;
    cin>>x;
  v1.push_back(x);

} 
for (int i=0;i<n;i++){
    int x;
    cin>>x;
  v2.push_back(x);

}
 
for (int i=0;i<n;i++){
    int a = modExp(2, v2[i], M);
cout<<a<<endl;
}

 }
int main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}