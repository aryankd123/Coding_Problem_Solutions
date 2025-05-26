#include <bits/stdc++.h>
using namespace std;
#define int long long
int req(vector<int> &v,int d,int k){
for(int i=0;i<v.size();i++){
    int old_no=0;
    for(int j=0;j<v.size();j++){
    old_no=old_no+(pow(10,(j))*v[j]);
    }
    //vector<int> v2=v;


    if(i!=v.size()-1)v[i]=9;
    else if(i==v.size()-1)v[i]=0;
    if(i+1<v.size())    {if(v[i+1]>0){v[i+1]--;}
                        else {v[i+1]=9;v[i+2]--;i++;}
                         }


int new_no=0;
for(int m=0;m<v.size();m++){
new_no=new_no+(pow(10,(m))*v[m]);
}
if(d-new_no==k) return new_no;
else if(d-new_no>k)return old_no;
else if(i==v.size()-1)return new_no;
}

}
void solve(){
int n,k;
cin>>n>>k;
int copy=n;
//int no_of_digit=0;
vector<int>v;
while(copy>0){
    v.push_back(copy%10);
    copy=copy/10;
    //no_of_digit++;
    
}

int ans=req(v,n,k);
int copy_ans=ans;
int count9=0;
while(copy_ans>0){
    if(copy_ans%10==9){count9++;copy_ans=copy_ans/10;}
    else break;
}
int copy_n=n;
int origin9=0;
while(copy_n>0){
    if(copy_n%10==9){origin9++;copy_n=copy_n/10;}
    else break;
}
if(count9>origin9){
cout<<ans;}
else cout<<n;
// for(int i=0;i<v.size();i++){
//     cout<<v[i];
// }

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}