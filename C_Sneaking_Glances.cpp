#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin>>n;
   int ct=(1<<n);
   int ans=0;
   long double last=0.5;
   vector<long double> dis;
   for(int i=0;i<n;i++){
    long double x;
    cin>>x;
    dis.push_back(x);
   }
   for(int i=0;i<ct;i++){
    int flag=0;
    last=0.5;

    for(int j=0;j<n;j++ ){
        
    long double curr=dis[j];
        if((1<<j)&i){
            long double baba=curr+last;
            if((last>0 && baba<0 )|| (last<0 && baba>0) ){
                flag++;
            }
            last=baba;
        }
        else {
            long double baba=last-curr;
            if((last>0 && baba<0 )|| (last<0 && baba>0)  ){
                flag++;
            }
            last=baba;

        }
    }
    ans=max(ans,flag);
   }
//    vector<int>v;
cout<<ans;
 

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
        solve();
    
    
    return 0;
}