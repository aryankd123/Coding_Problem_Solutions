#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
//****Precompute divisors(add precompute() to main)****
//int arr[highest];
//void precompute() {for (int i = 1; i < highest; i++) {arr[i] = 0;}for (int i = 1; i < highest; i++) {for (int j = i; j < highest; j += i) {arr[j]++;}}}
//***prefix xor function for prefix xor from 1 to a****
//int xor_ret(int a){
//if(a%4==0)return a;
//if (a%4==1)return 1;
//if(a%4==2)return a+1;
//return 0;
//}
void solve(){
vector<char> v(210, '*');
string s;
cin>>s;
int s_size=s.size();
for(int i=0;i<s_size;i++){
    if(s[i]>=65 && s[i]<=90)s[i]+=32;

}
int j=0;
for(int i=0;i<s_size;i++){
    j+=2;
    v[j]=s[i];
}
set<char> st;
st.insert('a');
st.insert('e');
st.insert('i');
st.insert('o');
st.insert('u');
st.insert('y');


for(int i=0;i<v.size();i++){
    if(st.find(v[i])!=st.end())v[i]='*';
    else if(v[i]>=97)v[i-1]='.';
}
for(int i=0;i<v.size();i++){
    if(v[i]!='*')cout<<v[i];
}

//vector<int> v;
//for(int i=0;i<n;i++){
//int x;
//cin>>x;
//v.push_back(x);
//}




} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}