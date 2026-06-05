#include <bits/stdc++.h>
using namespace std;



vector<int>pi_fn(string& s){
    int n=s.size();

    vector<int>pi(n,0);
    for(int i=1;i<n;i++){
        int j=pi[i-1];

        while(j>0 && pi[i]!=pi[j]){
            j=pi[j-1];
        }

        if(s[i]==s[j])j++;

        pi[i]=j;

    }
    return pi;

}




void solve() {
    string s;
    string p;
    cin>>s>>p;

    int n=s.size();
    int m=p.size();

    int l=0;
    int r=0;
    // vector<int> pi_s=pi_fn(s);
    vector<int>pi_p=pi_fn(p);

    int i=0;
    int j=0;

vector<int>match;
   if(m==0){cout<<"Not Found\n";
        cout<<"\n";
        return ;}
    while(i<n){

        if(s[i]==p[j]){
            i++;
            j++;

        }

        if(j==m){
            match.push_back(i-j+1);
            j=pi_p[j-1];

        }

        else if(i<n && s[i]!=p[j]){

            if(j==0){
                i++;
            }
            else {
                j=pi_p[j-1];
            }
        }

    }
    
    if(match.size()==0){
        cout<<"Not Found\n";
        cout<<"\n";
        return ;
    }
    cout<<match.size()<<"\n";

    for(auto val:match){
        cout<<val<<" ";
    }
    cout<<"\n";
    cout<<"\n";


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