#include <bits/stdc++.h>
using namespace std;
struct TrieNode{
    TrieNode* children[26];
    bool is_end;
    int occur;
    TrieNode(){
        is_end=0;
        occur=0;
        for(int i=0;i<26;i++){
            children[i]=nullptr;
        }
    }
};

class Trie{
private: 
TrieNode* root;
public:
Trie(){
    root=new TrieNode();
}

void insert(string s ){
    TrieNode* curr=root;
    for(char c:s){
        int idx =c-'a';
        if(curr->children[idx]==nullptr)curr->children[idx]=new TrieNode();
        curr=curr->children[idx];
        curr->occur++;
    }
    curr->is_end=1;
    
}


int find(string s){
    TrieNode* curr=root;
  
    for(char c:s){
        int idx =c-'a';
        curr=curr->children[idx];
        curr->occur--;
    }
     curr=root;

    int maxi=0;
    int ans =0;
    for(char c:s){
        int idx=c-'a';
        if(curr->children[idx]==nullptr){break;}
        curr=curr->children[idx];
        if(curr->occur==0){break;}
        ans++;
        

    }
    maxi=max(ans,maxi);

    insert(s);

    // TrieNode* curr2=root;
    // for(char c:s){
    //     int idx =c-'a';
    //     if(curr2->children[idx]==nullptr)curr2->children[idx]=new TrieNode();
    //     curr2=curr2->children[idx];
    //     curr2->occur++;
    // }
    // curr2->is_end=1;
    return maxi;
    
    // if(curr->num_end>1)return flag ;
    // for(int i=0;i<26;i++){
    //     if(curr->children[i]!=nullptr)return flag;
    }

  
};





void solve() {
    int n;
    cin>>n;
    vector<string>v;
    Trie tree;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        tree.insert(s);
    }

    for(int i=0;i<n;i++){
     string s=v[i];
     cout<<tree.find(s)<<"\n";

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