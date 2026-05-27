#include <bits/stdc++.h>
using namespace std;
#define int long long
//const int lowest = -1e6 ;
//const int highest= 1e6 ;
int bin_search(string& a,string& b,vector<int> &v,int& a_size){
int l=0;
int r=a_size;
while(l+1<r){
int m=(l+r)/2;
map<int,int> mp;
for(int i=0;i<m;i++){
    mp[v[i]-1]++;
}
string copy_a;
for(int i=0;i<a_size;i++){
    if(mp.find(i)==mp.end())copy_a.push_back(a[i]);
}
int b_size=b.size();
int flag=1;
int index_flag=0;
for(int j=0;j<b_size;j++){
  
    size_t index = copy_a.find(b[j],index_flag);
        if(index == string::npos) {flag=0;break;}
    if (index != string::npos) {
       // if(index>index_flag){flag=0;break;}
        //copy_a.erase(index, 1);
        index_flag=index+1;
        //index_flag=index;
    }


}
    if (flag==0) {
        r=m;
    } else {
        l=m;
    }
}
return l;
}

void solve(){
string a;
string b;
cin>>a>>b;
int a_size=a.size();

vector<int> v;
for(int i=0;i<a_size;i++){
int x;
cin>>x;
v.push_back(x);
}

int ans =bin_search(a,b,v,a_size);
cout<<ans;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}