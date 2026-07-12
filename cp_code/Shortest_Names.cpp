#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
    TrieNode* children[26];
    int occur;
    bool is_end;
    TrieNode(){
        occur=0;
        is_end=false;
        for(int i=0;i<26;i++){
            children[i]=nullptr;

        }

    }

};

class Trie{
private: TrieNode* root;
public:
Trie(){
    root = new TrieNode();
}

void insert (string s){
    TrieNode* curr= root;
    for(char c:s){
        int idx= c-'a';
        if(curr->children[idx]==nullptr)curr->children[idx]=new TrieNode();
        curr=curr->children[idx];
        curr->occur++;
    }
    curr->is_end=1;
}

int find_min(string s){
    TrieNode* curr= root;
    int ans=0;

    for(char c:s){
        int idx= c-'a';
        if(curr->occur==1){break;}
        curr=curr->children[idx];
        ans++;
    }
    return ans;
}




};


void solve() {
    int n;
    cin>>n;
    vector<string> v;
    Trie tree;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        tree.insert(s);
    }
int ans=0;

    for(int i=0;i<n;i++){
        string s=v[i];
        ans+= tree.find_min(s);
    }
    cout<<ans<<"\n";



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