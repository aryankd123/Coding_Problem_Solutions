#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n,m;
   cin>>m>>n;
   int draw=n%3;

   int rem_matches=m-draw;
   int rem_points=  n-draw;

    int best_x=0;
    int best_y=0;


   for(int y=0;y<=rem_points;y+=3){
    
    int x=rem_points-y;

    x=x/3;

    if(x+y+draw <= m ){
        best_x=x;
        best_y =y;
    }

   }
   int z=m-best_x-best_y-draw;

   cout<<z<<"\n";

    
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}