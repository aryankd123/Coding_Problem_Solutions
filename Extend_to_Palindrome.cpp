#include <bits/stdc++.h>
using namespace std;

vector<int>pi_fn(string & s){
    int n=s.size();
    vector<int>pi(n,0);
    for(int i=1;i<n;i++){
        int j=pi[i-1];

        while(j>0 && s[i]!=s[j]){
            j=pi[j-1];
        }
        if(s[i]==s[j])j++;
        pi[i]=j;
    }
    return pi;

    
}


void solve(string& s) {
    int n=s.size();
    string cpy=s;
    reverse(cpy.begin(),cpy.end());
    cpy.push_back('$');
    cpy.append(s);
    vector<int>pi_arr=pi_fn(cpy);
    string ans="";

    for(int i=0;i<n-pi_arr.back();i++){
        ans.push_back(s[i]);
    }
    reverse(ans.begin(),ans.end());
    s.append(ans);
    cout<<s<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
string s;

        while(std::cin>>s)
        {
            solve(s);
        
        }
    return 0;
}