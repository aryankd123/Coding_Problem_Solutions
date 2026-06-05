#include <bits/stdc++.h>
using namespace std;

vector<int>z_fn(string s){
    int n=s.size();
    vector<int>z(n,0);
    int l=0;
    int r=0;

    for(int i=1;i<n;i++){
        if(i<=r){
            z[i]=min(r-i+1,z[i-l]);

        }
        while(i+z[i]<n && s[z[i]]==s[i+z[i]]){
            z[i]++;
        }
        if(i+z[i]-1>r){
            l=i;
            r=i+z[i]-1;

        }
    }
    return z;

}



vector<int>pi_fn(string &s){
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





int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
    
        int n;
        while(std::cin>>n){
        //    string p,s;
        //    cin>>p>>s;
        //    int m=p.size();
        //    int n=s.size();

        //    string cpy=p;
        //    cpy.push_back('$');
        //    cpy.append(s);
        //    vector<int>ans=z_fn(cpy);
        //    bool flag =0;

        //    for(int i=1;i<ans.size();i++){
        //     if(ans[i]==m){cout<<i-m-1<<"\n";flag=1;}
        //    } 


        //     if(flag==0) cout<<"\n";

        string p,s;
        cin>>p>>s;
        int n=s.size();
        int m=p.size();

        vector<int>pi=pi_fn(p);
        vector<int>ans;
        int i=0;
        int j=0;
        

        while(i<n){
            
            if(s[i]==p[j]){
                i++;
                j++;
            }

            if(j==m){
                ans.push_back(i-j);
                j=pi[j-1];
            }
            else if(i<n && s[i]!=p[j]){
                if(j==0)i++;

                else{
                    j=pi[j-1];

                }

            }



        }


if(ans.size()==0)cout<<"\n";
for(auto val:ans)cout<<val<<"\n";
    }
    // }
    
    return 0;
}