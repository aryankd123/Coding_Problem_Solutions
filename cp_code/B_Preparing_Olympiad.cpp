#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;

void generate_sub(int n,int l,int r,int x,vector<int>::iterator it,int &count,vector<int> &v,vector<int> &subset){
    
    
    if(it==v.end()){
        int a=subset.size();
        if(a>1){
            int sum=accumulate(subset.begin(),subset.end(),0);
            int min_elem = *min_element(subset.begin(), subset.end());  
            int max_elem = *max_element(subset.begin(), subset.end());
            if(sum>=l && sum<=r && (max_elem-min_elem)>=x)count++;
        }
        
        return ;

    }   //note-dont change the elements during recursion

    subset.push_back(*it);
    generate_sub(n,l,r,x,next(it),count,v,subset);
    
    subset.pop_back();
    generate_sub(n,l,r,x,next(it),count,v,subset);
    



    
}
void solve(){
int n,l,r,x;
cin>>n>>l>>r>>x;
vector<int> v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v.push_back(x);
}
int count=0;
vector<int>subset;
generate_sub(n,l,r,x,v.begin(),count,v,subset);
cout<<count;


} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}