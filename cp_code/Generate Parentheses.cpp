#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<string> generate(vector<string>& v,string &s,int count1,int count2){
    if(count1==0&& count2==0){
        v.push_back(s);
        return v;
    }
    if(count1>0){s.push_back('(');
    generate(v,s,count1-1,count2);
     s.pop_back();
    }
   
    if(count2>0 &&count2>count1){
        s.push_back(')');
        generate(v,s,count1,count2-1);
          s.pop_back();

    }
 

}
void solve(){
int n;
cin>>n;
string s;

vector<string> v;
v=generate(v,s,n,n);
for(auto val:v){
    cout<<val<<endl;
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