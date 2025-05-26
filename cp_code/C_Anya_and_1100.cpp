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
#include <iomanip>
using namespace std;
typedef long long int lli;
void solve(){

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}
string s;
cin>>s;

int q;
cin>>q;

set<int> st;
for(int i=0;i<s.length()-3;i++){
    if(s[i]=='1'&& s[i+1]=='1' && s[i+2]=='0'&& s[i+3]=='0'){
     st.insert(i);
    }}
while(q--){
    int x;
    char y;
    cin>>x;
    cin>>y;

    for(int j=x-4;j<=x-1 ;j++){
        if((j>=0) && (j+3<s.length()) && (s[j]=='1'&& s[j+1]=='1' && s[j+2]=='0'&& s[j+3]=='0'))
        {
         st.erase(st.find(j));
        }  
    }

    s[x-1]=y;
    for(int j=x-4;j<=x-1 ;j++){
        if((j>=0) && (j+3<s.length()) && (s[j]=='1'&& s[j+1]=='1' && s[j+2]=='0'&& s[j+3]=='0'))
        {
         st.insert(j);
        }  
    }
    if(st.empty()){
        cout<<"NO"<<endl;
        
    }
    else cout<<"YES"<<endl;
        
    }
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