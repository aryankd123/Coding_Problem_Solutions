#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;
int k;
struct stack{
    vector<int> s,smin{LLONG_MAX},smax={LLONG_MIN};

void push(int x){
    s.push_back(x);
    smin.push_back(::min(smin.back(),x));
    smax.push_back(::max(smax.back(),x));
                }

bool is_empty(){
    return s.empty();
                }
int min(){
    return smin.back();
        }
int max(){
    return smax.back();
        }
int pop(){
    int res=s.back();
    s.pop_back();
    smin.pop_back();
    smax.pop_back();
    return res;
        }

};
:: stack s1,s2;
void add (int a){
    s2.push(a);
}

void remove(){
    if(s1.is_empty()){
        while(!s2.is_empty()){
            s1.push(s2.pop());
        }
        //s1.pop();
    }
    s1.pop();
 }
bool good(){
    int mn=min(s1.min(),s2.min());
    int mx= max(s1.max(),s2.max());
    return mx-mn<=k;
}



void solve(){
int n;

cin>>n>>k;
vector<int> v;
for(int i=0;i<n;i++){
    int x;

    cin>>x;
    v.push_back(x);
}
int res=0;
int l=0;
for(int r=0;r<n;r++){
    add(v[r]);
    while(!good()){
        remove();
        l++;

    }
    res+=r-l+1;
}



cout<<res<<'\n';



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();
  return 0;
}