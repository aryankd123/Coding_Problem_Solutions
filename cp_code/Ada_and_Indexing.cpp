#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
    vector<int>sizee;
    TrieNode* children[26];
    bool is_end;
    TrieNode(){
    is_end=0;
    sizee.resize(26,0);
    for(int i=0;i<26;i++){
    children[i]=nullptr;
                    }

        }

    };

class Trie{
    private: TrieNode* root;
    
    public:

    Trie(){
        root= new TrieNode();
    }



    void insert(string s){
        TrieNode* curr= root;
        for(char c:s){
            int idx=c-'a';
            if(curr->children[idx]==nullptr){
                curr->children[idx]=new TrieNode();
                
            }
            curr=curr->children[idx];
            curr->sizee[idx]+=1;

        }
        curr->is_end=true;
    }

    

    int num_prefix(string s){
        int ans=0;

        TrieNode* curr=root;
        int last_idx=0;
        for(char c:s){
            int idx=c-'a';
            if(curr->children[idx]==nullptr)return 0;
            curr=curr->children[idx];
            last_idx=idx;
        }
        
        return curr->sizee[last_idx];


    }

    
};



void solve() {
    int n,q;
    cin>>n>>q;
    Trie tree;

    while(n--){
        string s;
        cin>>s;

        tree.insert(s);

    }
    while(q--){
        string s;
        cin>>s;
        cout<<tree.num_prefix(s)<<"\n";
    }

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}