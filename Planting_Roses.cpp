#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> rem;
    int flag=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        flag+=x/k;
        if(x%k>0) rem.push_back(x%k);


    }

    sort(rem.begin(),rem.end());
    reverse(rem.begin(),rem.end());

    int avl=m+1;
    int plant=0;
    int f_c=k+1;
    int baba=avl/f_c;
    if(baba<flag){
        plant=baba*k;
        int left=avl%f_c;
        if(left>0){
            plant+=left-1;

        }
        cout<<plant<<"\n";
        return ;
    }
    plant=flag*k;
    avl-=flag*f_c;

    for(auto r:rem){
        if(avl>=r+1){
            plant+=r;
            avl-=(r+1);

        }
        else {
            if(avl>0)plant+=avl-1;

            break;
        }
        
    }


    
cout<<plant<<"\n";


}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}