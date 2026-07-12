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

int get_min_xor(int n){
    int ans=0;
    TrieNode* curr=root;
        for(int i=31;i>=0;i-- ){
            int bit=((n>>i)&1);
            int diff_bit=1-bit;
            if(curr->has_key(bit)){
                
                curr=curr->get(bit);
            }
            else {
                ans=(ans|(1<<i));
                curr=curr->get(diff_bit);
            }
            

        }
        return ans;
    }



void erase(int n){
    TrieNode* curr= root;

    for(int i=31;i>=0;i--){
        int bit= ((n>>i)&1);
        if(curr->exists(bit)==0)return ;
        curr=curr->get(bit);
        curr->occur--;
        // if(curr->occur==0){curr=nullptr;return ;}
    }
}





};



void solve() {
    int q;
    cin>>q;
    Trie tree;
    // tree.add(0);
   set<int> present; 
    
    while(q--){
        int x, n;
        cin>>x>>n;
        if(x==0) {
            // Only add to Trie if it's NOT already in the set
            if(present.find(n) == present.end()) {
                tree.add(n);
                present.insert(n);
            }
        }
        else if(x==1) {
            // Only erase from Trie if it IS currently in the set
            if(present.find(n) != present.end()) {
                tree.erase(n);
                present.erase(n);
            }
        }
        else cout<<tree.get_min_xor(n)<<"\n";
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