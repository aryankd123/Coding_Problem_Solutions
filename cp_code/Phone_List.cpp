#include <bits/stdc++.h>
using namespace std;
#define int long long 
typedef pair<int,int>pi;
 
const int p1=31;
const int p2=37;

const int m1= 1e9+7;
const int m2 =1e9+13;

vector<int>power1(15,1);
vector<int>power2(15,1);

void construct(){
for(int i=1;i<=12;i++){
power1[i]=(power1[i-1]*p1)%m1;
power2[i]=(power2[i-1]*p2)%m2;

}
}


vector<int> hasher1(string s){
    int n=s.size();
   vector<int>hash1(12,0);
    for(int i=0;i<n;i++ ){
        hash1[i+1]=(hash1[i]%m1+((s[i]-'0'+1)*power1[i])%m1)%m1;

    }
    return hash1;


}
vector<int> hasher2(string s){
    int n=s.size();
   vector<int>hash2(12,0);
    for(int i=0;i<n;i++ ){
        hash2[i+1]=(hash2[i]%m2+((s[i]-'0'+1)*power2[i])%m2)%m2;

    }
    return hash2;
}


struct TrieNode{
    TrieNode* children[26];
    int occur;
    bool is_end;
    TrieNode(){
        occur=0;
        is_end=0;
        for(int i=0;i<26;i++)children[i]=nullptr;
    }
};

class trie{
    private: TrieNode* root;
    public:
    trie(){
        root=new TrieNode();

    }
    void insert(string s){
        TrieNode* curr=root;
        for(char c:s){
            int idx =c-'0';
            if(curr->children[idx]==nullptr)curr->children[idx]=new TrieNode();
            curr=curr->children[idx];
            curr->occur++;
        }
        curr->is_end=1;


    }

    bool check(string s){

        TrieNode* curr=root;
        for(char c:s){
            int idx =c-'0';
            curr=curr->children[idx];
            
        }
        if(curr->occur>1)return 1;
        return 0;

    }


};












void solve() {
    int n;
    cin>>n;
    trie tree;
    vector<string>v;

    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);
        tree.insert(x);
    }

    bool is=1;
    for(int i=0;i<n;i++){
        if(tree.check(v[i])==1){is=0;break;}
    }
    if(is==0)cout<<"NO\n";
    else cout<<"YES\n";

}
void solve2(){
     int n;
    cin>>n;
    vector<string>v;
    map<pi,int>mp;
   bool flagg =1;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);


        vector<int>hash1=hasher1(x);
        vector<int>hash2=hasher2(x);


        int flag1 =(hash1[x.size()]-hash1[0]+m1)%m1;
        int flag2 =(hash2[x.size()]-hash2[0]+m2)%m2;

        mp[{flag1,flag2}]++;
    }
    

for(int i=0;i<n;i++){
    string x=v[i];
          int ss=x.size();
        // string cpy="";
        
            vector<int>hash1= hasher1(x);
            vector<int>hash2= hasher2(x);

            for(int i=1;i<ss;i++){
            int baba1=(hash1[i]-hash1[0]+m1)%m1;
            int baba2=(hash2[i]-hash2[0]+m2)%m2;
            if(mp.find({baba1,baba2})!=mp.end())flagg=0;
            }
            int baba1=(hash1[ss]-hash1[0]+m1)%m1;
            int baba2=(hash2[ss]-hash2[0]+m2)%m2;
            if(mp[make_pair(baba1,baba2)]>1)flagg=0;

        // for(int j=0;j<ss;j++){
        //     cpy.push_back(x[j]);
        // vector<int>hash=hasher(cpy);
        // int flag =(hash[cpy.size()]-hash[0]+m1)%m1;
        // if(j<ss-1&& mp.find(flag)!=mp.end()){flagg =0;break;}
        // if(j==ss-1 && mp[flag]>1){flagg =0;break;}
        // }
        // if(flagg==0)break;
        
}

    if(flagg==1)cout<<"YES\n";
    else cout<<"NO\n";
}


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    construct ();
    int t;
    cin >> t;
    // while(t--) {
    //     solve();
    // }
     while(t--) {
        solve2();
    }
    
    return 0;
}