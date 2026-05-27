#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
void solve(){
string s;
cin>>s;
size_t pos = s.find('0'); 
    if (pos != string::npos) {
        s.erase(pos, 1); 
    }
    else{s.pop_back();}

    cout << s << endl;





} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}