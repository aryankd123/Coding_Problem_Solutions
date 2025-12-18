#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef pair<int,int> pi;
typedef pair<int,pair<int,int>> ppi;
const int lowest = -1e6 ;
const int highest= 1e6 ;
const int M =1e9+7;

void solve(){


int n;
cin>>n;





vector<int> v;
for(int i=0;i<2*n;i++){
int x;
cin>>x;
v.push_back(x);
}

  vector<int> freq(n+1,0);
    for (int x:v) {
        if (x>=1&&x<=n)freq[x]++;
    }

    stack<int> missing;
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) missing.push(i);
    }


vector<int> vp(n+1,0);
vector<int>ans(2*n,0);

vector<int> used(n+1,0);
for(int i=0;i<2*n-1;i+=2){
    if(v[i]==v[i+1] )used[v[i]]=-1;
}
int pos=1;

for (int i = 0; i < 2*n-1; i += 2) {
    if (v[i] == v[i+1] && vp[v[i]]==0 ) {
        ans[i] = v[i];
        ans[i + 1] = v[i];
        vp[v[i]]=1;
         used[v[i]]=1;
    }
    else if(v[i]==v[i+1] && vp[v[i]]!=0){
        if(!missing.empty()){
                int x=missing.top();
                missing.pop();
                freq[v[i]]--;
                if(freq[v[i]]==0)missing.push(v[i]);
                freq[v[i+1]]--;
                if(freq[v[i+1]]==0)missing.push(v[i+1]);
               ans[i]=x;
               ans[i+1]=x;
               used[x]=1;
               continue;
        }
        for(int j=pos;j<=n;j++){
            if(vp[j]==0){
                pos=j;
                ans[i]=pos;
                ans[i+1]=pos;
                vp[pos]=1;
                freq[pos]+=2;
                used[pos]=1;
                freq[v[i]]--;
                if(freq[v[i]]==0)missing.push(v[i]);
                freq[v[i+1]]--;
                if(freq[v[i+1]]==0)missing.push(v[i+1]);
                break;

            }
        }
        
    }
    else {

        if(vp[v[i]]==0 && used[v[i]]!=-1 && vp[v[i+1]]==0 && used[v[i+1]]!=-1){
            if(freq[v[i+1]]<=freq[v[i]]){
                swap(v[i],v[i+1]);
            }
            

        }



        if(vp[v[i]]==0 && used[v[i]]!=-1){
            used[v[i]]=1;
            ans[i]=v[i];
            ans[i+1]=v[i];
           
            freq[v[i+1]]--;
            if(freq[v[i+1]]==0)missing.push(v[i+1]);

            freq[v[i]]+=1;
            vp[v[i]]=1;
            continue;

        }
        else if(vp[v[i+1]]==0 && used[v[i+1]]!=-1){
            used[v[i+1]]=1;
            ans[i]=v[i+1];
            ans[i+1]=v[i+1];
            freq[v[i]]--;

            freq[v[i+1]]+=1;
            if(freq[v[i]]==0)missing.push(v[i]);

            vp[v[i+1]]=1;
            continue;

        }
        else {
             if(!missing.empty()){
         
                int x=missing.top();
                missing.pop();
                
               ans[i]=x;
               ans[i+1]=x;
               freq[x]+=2;
                used[x]=1;
                freq[v[i]]--;
                if(freq[v[i]]==0)missing.push(v[i]);
                freq[v[i+1]]--;
                if(freq[v[i+1]]==0)missing.push(v[i+1]);
               continue;
        }
            for(int j=pos;j<=n;j++){
                if(vp[j]==0){
                    pos=j;
                    ans[i]=pos;
                    ans[i+1]=pos;
                    freq[pos]+=2;
                        used[pos]=1;
                freq[v[i]]--;
                if(freq[v[i]]==0)missing.push(v[i]);
                freq[v[i+1]]--;
                if(freq[v[i+1]]==0)missing.push(v[i+1]);
                    vp[pos]=1;
                    break;
                }
            }
        }

    }
}
int cnt=0;
for(int i=0;i<2*n;i++){
if(ans[i]!=v[i])cnt++;
}
cout<<cnt<<'\n';
} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
//factorial();
//inverses();
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}