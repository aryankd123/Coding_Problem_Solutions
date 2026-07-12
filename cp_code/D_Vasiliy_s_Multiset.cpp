#include <bits/stdc++.h>
using namespace std;



struct TrieNode{
    TrieNode* links[2];
    int occur;
    TrieNode(){
        occur=0;
        for(int i=0;i<2;i++){links[i]=nullptr;}
    }
    bool has_key(int bit){
        return  (links[bit]!=nullptr && links[bit]->occur>0);
    }
    bool exists(int bit){
        return  (links[bit]!=nullptr);
    }

    TrieNode* get(int bit){
        return links[bit];
    }


    void create(int bit,TrieNode* node){
        links[bit]=node;

    }
};




class Trie{
private :TrieNode* root;
public:
Trie(){
    root= new TrieNode();
}

void add(int n){
    TrieNode* curr= root;

    for(int i=31;i>=0;i--){
        int bit= ((n>>i)&1);
        if(!curr->exists(bit))curr->create(bit,new TrieNode());
        curr=curr->get(bit);
        curr->occur++;
    }
}

int get_max_xor(int n){
    int ans=0;
    TrieNode* curr=root;
        for(int i=31;i>=0;i-- ){
            int bit=((n>>i)&1);
            int diff_bit=1-bit;
            if(curr->has_key(diff_bit)){
                ans=(ans|(1<<i));
                curr=curr->get(diff_bit);
            }
            else {
                curr=curr->get(bit);
            }

        }
        return ans;
    }



void erase(int n){
    TrieNode* curr= root;

    for(int i=31;i>=0;i--){
        int bit= ((n>>i)&1);
        curr=curr->get(bit);
        curr->occur--;
    }
}





};



void solve() {
    int q;
    cin>>q;
    Trie tree;
    tree.add(0);
    while(q--){
        char x;int n;
        cin>>x>>n;
        if(x=='+') tree.add(n);
        else if(x=='-')tree.erase(n);
        else cout<<tree.get_max_xor(n)<<"\n";
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